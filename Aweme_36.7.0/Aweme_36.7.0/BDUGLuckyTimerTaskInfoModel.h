@class BDUGLuckyTimerConfig, NSString, NSDictionary, BDUGLuckyTimerPendentConfig;

@interface BDUGLuckyTimerTaskInfoModel : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *timerTaskKey;
@property (nonatomic) BOOL expireState;
@property (retain, nonatomic) BDUGLuckyTimerConfig *timerConfig;
@property (retain, nonatomic) BDUGLuckyTimerPendentConfig *pendantConfig;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSDictionary *clientExtra;
@property (copy, nonatomic) NSString *taskTag;
@property (copy, nonatomic) NSString *token;

- (void).cxx_destruct;

@end
