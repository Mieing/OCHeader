@class MMNotificationViewController;

@interface MMNotificationWindow : MMUIWindow {
    MMNotificationViewController *m_viewController;
}

- (id)initWithViewController:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
