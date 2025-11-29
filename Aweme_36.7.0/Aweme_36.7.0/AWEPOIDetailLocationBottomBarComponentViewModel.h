@class NSString, DUXBottomNotification;

@interface AWEPOIDetailLocationBottomBarComponentViewModel : DitoComponentViewModel

@property (copy, nonatomic) NSString *cardKey;
@property (nonatomic) long long cardPriority;
@property (retain, nonatomic) DUXBottomNotification *locationBottomBar;

- (void)bindStateAndAction;
- (void)showLocationBottomBar:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
