@interface WCMomentsAITemplateRegularGuideView : MMHalfScreenGuideView

- (id)init;
- (id)attributedTextForMessage:(id)a0 alignment:(long long)a1;
- (void)showWithAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)cancelButtonDidClick:(id)a0;
- (void)acceptButtonDidClick:(id)a0;
- (void)_reportRegularShowed;
- (void)_reportRegularAccepted;
- (void)_reportRegularCancelled;
- (void)_reportGuideAction:(long long)a0;

@end
