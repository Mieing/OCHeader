@class NSString, UILabel, BDPCheckBox, UIView;

@interface BDPGameShortTermSubscribeFooterView : UIView

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *infoText;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UIView *containerView;

- (void)updateContainerViewBottom;
- (void)updateCheckBoxStatus:(long long)a0;
- (id)initWithLabelText:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)onTap:(id)a0;

@end
