@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveCommonPopoverView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *givenArrowImg;
@property (retain, nonatomic) UIButton *hotActionBtn;
@property (retain, nonatomic) UIImageView *hotActionImg;
@property (nonatomic) long long showType;
@property (nonatomic) long long direction;
@property (weak, nonatomic) UIView *pointingView;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) double offsetForArrowToContainer;
@property (nonatomic) double offsetForArrowToPointingView;
@property (nonatomic) double spaceForArrowToPointingView;
@property (copy, nonatomic) NSString *schemaUrl;

- (void)showTip:(id)a0;
- (void)hotBtnClick;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)hide;
- (void)setupViews;

@end
