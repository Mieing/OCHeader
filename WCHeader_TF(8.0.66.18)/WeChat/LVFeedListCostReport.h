@class NSString;

@interface LVFeedListCostReport : NSObject

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) unsigned long long timeCost;
@property (nonatomic) BOOL isFromPreload;
@property (nonatomic) unsigned long long exitTimeCost;
@property (nonatomic) BOOL isShowBeforeEnter;
@property (nonatomic) BOOL watchLaterCountWhenShow;
@property (nonatomic) BOOL feedCountWhenShow;

- (unsigned int)logId;
- (void)markEnter;
- (void)markShow:(BOOL)a0 watchLaterCount:(long long)a1 feedCount:(long long)a2;
- (void)markExit;
- (void).cxx_destruct;

@end
