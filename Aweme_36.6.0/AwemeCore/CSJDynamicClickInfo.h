@class UIView;

@interface CSJDynamicClickInfo : NSObject

@property (nonatomic) long long downTime;
@property (nonatomic) long long upTime;
@property (nonatomic) struct CGPoint { double x; double y; } reportDownPoint;
@property (nonatomic) struct CGPoint { double x; double y; } reportUpPoint;
@property (weak, nonatomic) UIView *responseView;
@property (nonatomic) struct CGPoint { double x; double y; } downPoint;
@property (nonatomic) struct CGPoint { double x; double y; } upPoint;
@property (nonatomic) long long clickViewSource;
@property (nonatomic) BOOL openPlayableLandingPage;
@property (nonatomic) BOOL removeOpenPlayableLandingPage;
@property (nonatomic) long long convertActionType;

- (void)mapToView:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;
- (id)keyPrefix;

@end
