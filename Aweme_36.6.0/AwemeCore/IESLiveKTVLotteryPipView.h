@class UILabel, UIButton, UIView;

@interface IESLiveKTVLotteryPipView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UIButton *oneChooseBtn;
@property (nonatomic) BOOL isChooseAutoOpen;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *openBtn;
@property (nonatomic) BOOL isLinking;
@property (copy, nonatomic) id /* block */ openBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ autoSwtichBlock;

- (void)setUpLayouts;
- (void)onTapOnchooes;
- (void)onTapCancelBtn;
- (void)onTapOpenBtn;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (double)totalHeight;

@end
