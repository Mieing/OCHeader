@class ZXByteArray;

@interface ZXQRCodeBlockPair : NSObject

@property (readonly, nonatomic) ZXByteArray *dataBytes;
@property (readonly, nonatomic) ZXByteArray *errorCorrectionBytes;

- (id)initWithData:(id)a0 errorCorrection:(id)a1;
- (void).cxx_destruct;

@end
