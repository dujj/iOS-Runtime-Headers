/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLRenderState : NSObject  {
    BOOL _enableDepthTest;
    int _depthMode;
    BOOL _depthMask;
    BOOL _enableCullFace;
    int _blendMode;
    BOOL _stencilTest;
}

@property BOOL enableDepthTest;
@property int depthMode;
@property BOOL depthMask;
@property BOOL enableCullFace;
@property int blendMode;
@property BOOL stencilTest;

+ (id)sharedSimpleState;

- (BOOL)enableCullFace;
- (BOOL)enableDepthTest;
- (void)pushStateIntoContext:(id)arg1;
- (void)setDepthMode:(int)arg1;
- (BOOL)stencilTest;
- (int)depthMode;
- (void)loadStateFromContext:(id)arg1;
- (void)setDepthMask:(BOOL)arg1;
- (BOOL)depthMask;
- (void)setEnableDepthTest:(BOOL)arg1;
- (void)setEnableCullFace:(BOOL)arg1;
- (void)setStencilTest:(BOOL)arg1;
- (void)reset;
- (id)init;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;
- (id)initWithContext:(id)arg1;

@end