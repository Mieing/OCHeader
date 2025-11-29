@interface AWELoginGuideStrategyResult : NSObject

@property (nonatomic) BOOL canShow;
@property (nonatomic) BOOL needNewPeriod;
@property (nonatomic) BOOL needResetSkip;
@property (nonatomic) BOOL needResetFail;

- (id)init;

@end
