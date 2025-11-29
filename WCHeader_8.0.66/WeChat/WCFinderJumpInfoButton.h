@class MMUIButton;

@interface WCFinderJumpInfoButton : WCFinderJumpInfoView

@property (retain, nonatomic) MMUIButton *actionButton;

- (id)init;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)changeToShow:(BOOL)a0;
- (void)onActionButtonDidClick;
- (void)updateButton:(id)a0;
- (void).cxx_destruct;

@end
