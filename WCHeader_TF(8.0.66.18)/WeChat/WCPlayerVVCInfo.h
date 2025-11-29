@interface WCPlayerVVCInfo : NSObject

@property (nonatomic) float playDecodingFps;
@property (nonatomic) float playRenderingFps;
@property (nonatomic) long long playDecodeStuckCount;
@property (nonatomic) long long playRenderStuckCount;
@property (nonatomic) float playDecodeStuckRatio;
@property (nonatomic) float playRenderStuckRatio;
@property (nonatomic) unsigned long long lastProceedTime;
@property (nonatomic) long long lastVideoDecodeFrmCnt;
@property (nonatomic) long long lastVideoRenderFrmCnt;
@property (nonatomic) long long totalProceedCnt;
@property (nonatomic) long long totalDecodeFPSCnt;
@property (nonatomic) long long totalRenderFPSCnt;

- (id)init;

@end
