@class UIButton, UILabel;

@interface WARemoteDebugMaskView : UIView {
    BOOL _isShowing;
    UILabel *_label;
}

@property (retain, nonatomic) UIButton *stopButton;

- (id)init;
- (void)showWithString:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;

@end
