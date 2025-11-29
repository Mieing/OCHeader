@interface ZXQRCodeDecoderMetaData : NSObject

@property (readonly, nonatomic) BOOL mirrored;

- (id)initWithMirrored:(BOOL)a0;
- (void)applyMirroredCorrection:(id)a0;

@end
