@interface AWEYAPSplitBillComponent : AWEIMFlexComponent <AWEIMMessageContentInterface> {
    void /* unknown type, empty encoding */ transferManager;
}

@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)viewControllerLifeCycleChanged:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)displayMessage;

@end
