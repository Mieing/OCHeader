@class UILabel, UIButton, AWERelationListCellBaseViewModel;

@interface AWECommonUserListBaseCell : AWERelationListUserBaseCell

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) AWERelationListCellBaseViewModel *adapterModel;
@property (copy, nonatomic) id /* block */ moreButtonClickBlock;

+ (id)_defaultImage;

- (void)actionBtnClicked;
- (void)configWithModel:(id)a0;
- (void)layoutNameAndDesc;
- (void)setDescLabelModel:(id)a0;
- (void)moreBtnClicked;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (double)avatarWidth;

@end
