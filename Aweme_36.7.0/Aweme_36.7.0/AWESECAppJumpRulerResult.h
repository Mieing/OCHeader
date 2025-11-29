@class NSError, NSString;

@interface AWESECAppJumpRulerResult : AWESECAppJumpBasicCheckResult

@property (retain, nonatomic) NSError *engineError;
@property (retain, nonatomic) NSString *strategyHit;
@property (nonatomic) long long silentModeDuration;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *leftButton;
@property (copy, nonatomic) NSString *rightButton;

- (void).cxx_destruct;
- (id)init;

@end
