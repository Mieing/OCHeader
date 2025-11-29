@class NSString, UIView;
@protocol IESLLBottomNotificationInterface;

@interface IESLLPOIDetailLocationBottomBarComponentViewModel : LLDitoComponentViewModel

@property (copy, nonatomic) NSString *cardKey;
@property (nonatomic) long long cardPriority;
@property (retain, nonatomic) UIView<IESLLBottomNotificationInterface> *locationBottomBar;

- (void)bindStateAndAction;
- (void)showLocationBottomBar:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
