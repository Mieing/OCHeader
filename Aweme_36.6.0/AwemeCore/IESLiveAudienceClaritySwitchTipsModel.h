@class NSString;

@interface IESLiveAudienceClaritySwitchTipsModel : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long switchType;
@property (copy, nonatomic) NSString *caption;
@property (nonatomic) unsigned long long showTime;

- (void)setupWithStrategyInfo:(id)a0;
- (id)initWithStrategyInfo:(id)a0;
- (void).cxx_destruct;

@end
