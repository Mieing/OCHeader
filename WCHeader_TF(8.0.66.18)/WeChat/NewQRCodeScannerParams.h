@class CameraScannerViewWrapper;

@interface NewQRCodeScannerParams : NSObject

@property (nonatomic) int codeType;
@property (nonatomic) BOOL isUseSmallCropArea;
@property (nonatomic) BOOL isSupportMultiCodes;
@property (nonatomic) BOOL isEnableSnapshot;
@property (nonatomic) BOOL shouldSetBlacklistDelayedFrames;
@property (retain, nonatomic) CameraScannerViewWrapper *wrapper;

- (id)initWithCodeType:(int)a0;
- (id)initWithCodeType:(int)a0 isUseSmallCropArea:(BOOL)a1;
- (id)initWithCodeType:(int)a0 isUseSmallCropArea:(BOOL)a1 shouldSetBlacklistDelayedFrames:(BOOL)a2 wrapper:(id)a3;
- (void).cxx_destruct;

@end
