@class BDUGLuckyTipConf, NSString, BDUGLuckyTabConf, BDUGLuckyLottieConf;

@interface BDUGLuckyTabInfo : BDUGLuckyBDModel

@property (nonatomic) double startTimeMs;
@property (nonatomic) double endTimeMs;
@property (copy, nonatomic) NSString *activityId;
@property (retain, nonatomic) BDUGLuckyTabConf *tabConf;
@property (retain, nonatomic) BDUGLuckyTipConf *tipConf;
@property (retain, nonatomic) BDUGLuckyLottieConf *lottieConf;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) long long tabId;
@property (copy, nonatomic) NSString *tabActionUrl;

+ (id)modelCustomPropertyMapper;

- (id)tabIDStr;
- (BOOL)isEqualToTabInfo:(id)a0;
- (id)hashString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
