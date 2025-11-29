@class NSMutableArray;

@interface AWETeenInteractionStrongSubscribeManager : NSObject

@property (retain, nonatomic) NSMutableArray *authorIDArr;
@property (nonatomic) long long maxShowTimes;
@property (nonatomic) long long maxSubscribedCount;
@property (nonatomic) long long showAtPlayTimes;
@property (nonatomic) double showAtPlayProgress;
@property (nonatomic) BOOL isShowing;

+ (id)subscribeConfig;
+ (id)sharedInstance;

- (BOOL)canShowWithModel:(id)a0;
- (void)p_config;
- (BOOL)p_canShowRecordOnToday;
- (void)showStrongSubscribeWithModel:(id)a0;
- (void)notShowWithAuthorID:(id)a0;
- (void).cxx_destruct;

@end
