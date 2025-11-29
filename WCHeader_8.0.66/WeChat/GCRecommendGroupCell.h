@class UIButton, GCTagLineView, UIImageView, UILabel, MMWebImageView, UIView;

@interface GCRecommendGroupCell : GameChatBaseGroupCell

@property (retain, nonatomic) UIImageView *lockImgView;
@property (retain, nonatomic) MMWebImageView *userImgView;
@property (retain, nonatomic) UILabel *onlyLabel;
@property (retain, nonatomic) UIView *conditonViewContainer;
@property (retain, nonatomic) UIView *conditionViewWithSpace;
@property (retain, nonatomic) UIView *bulletMsgContainer;
@property (retain, nonatomic) GCTagLineView *tagLineView;
@property (retain, nonatomic) UIButton *rightBtn;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)myGroupCellLayout;
- (void)setUpConditionViewWithModel:(id)a0 conditionMaxWidth:(double)a1;
- (void)configureWithCellModel:(id)a0;
- (void)onRightBtnClicked:(id)a0;
- (double)verticalAlignCenterY;
- (id)verticalAlignArrary;
- (void).cxx_destruct;

@end
