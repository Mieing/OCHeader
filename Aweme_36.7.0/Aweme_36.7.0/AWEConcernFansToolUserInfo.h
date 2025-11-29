@class NSString, NSMutableDictionary;

@interface AWEConcernFansToolUserInfo : NSObject

@property (nonatomic) BOOL isShownShareTooltips;
@property (nonatomic) double timeForTrafficCycle;
@property (nonatomic) BOOL isAvailable;
@property (retain, nonatomic) NSMutableDictionary *yellowDotInfo;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL isNewUserYellowDot;
@property (nonatomic) long long trafficCount;
@property (nonatomic) BOOL isNeedReceiveTraffic;
@property (nonatomic) BOOL isFansToolBasicMode;

- (void)removeNewUserYellowDot:(long long)a0;
- (BOOL)canShowYellowDot:(long long)a0;
- (void)expiredTrafficYellowDot;
- (void)showedShareTooltips;
- (BOOL)__canShowNewUserYellowDot:(long long)a0;
- (BOOL)__canShowTrafficYellowDot;
- (id)__keyForFansTool:(id)a0;
- (void)__storeYellowDotInfo;
- (void)__expiredNewUserYellowDot;
- (void).cxx_destruct;
- (id)initWithUserModel:(id)a0;
- (void)updateUserInfo:(id)a0;

@end
