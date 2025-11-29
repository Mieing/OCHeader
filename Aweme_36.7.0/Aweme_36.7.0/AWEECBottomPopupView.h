@class UIView, NSString, NSArray, UIImage, AWEECBottomPopupAction, UIImageView, UIButton, NSMutableArray, UILabel;

@interface AWEECBottomPopupView : UIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEECBottomPopupAction *setting;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *settingLabel;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (retain, nonatomic) UIView *buttonsContainerView;
@property (nonatomic) BOOL isButtonAlignedVertically;

+ (void)showWithTitle:(id)a0 description:(id)a1 setting:(id)a2 headerImage:(id)a3 actions:(id)a4;

- (void)settingLabelClicked:(id)a0;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_show;
- (void)_setupUI;

@end
