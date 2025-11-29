@class UILabel, UIImageView, UITapGestureRecognizer;

@interface AWEPayReceiveCoverView : UIView

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *downArrow;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ buttonBlock;

- (void)p_setTitle;
- (void)p_setupButtonClick;
- (void)switchStatus:(unsigned long long)a0;
- (id)getButtonName;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStatus:(unsigned long long)a0;

@end
