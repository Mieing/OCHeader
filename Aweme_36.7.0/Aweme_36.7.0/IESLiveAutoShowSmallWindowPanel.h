@class UIImageView, UILabel, UIView, UIButton;

@interface IESLiveAutoShowSmallWindowPanel : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *describeView;
@property (retain, nonatomic) UIButton *oneChooseBtn;
@property (nonatomic) BOOL isChooseAutoOpen;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *openBtn;
@property (nonatomic) unsigned long long panelType;
@property (copy, nonatomic) id /* block */ openBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ autoSwtichBlock;

- (void)setUpLayouts;
- (void)onTapOnchooes;
- (void)onTapCancelBtn;
- (void)onTapOpenBtn;
- (id)initWithPanelType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
