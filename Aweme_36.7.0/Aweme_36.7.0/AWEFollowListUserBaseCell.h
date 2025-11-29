@class UIView, NSArray, AWEConcernFansLabelView, AWEConcernFansLabelModel, AWEFollowListEntranceView, AWEFollowListEntranceContentModel, MASConstraint, DUXButton, AWEInsetsLabel, UILabel, AWERelationListNameLabel;

@interface AWEFollowListUserBaseCell : AWERelationListUserBaseCell {
    DUXButton *_actionButton;
    AWERelationListNameLabel *_nameLabel;
}

@property (nonatomic) BOOL revertLibra;
@property (retain, nonatomic) AWEInsetsLabel *desWithBorderLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEFollowListEntranceView *entranceView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) MASConstraint *centerYConstraint;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (retain, nonatomic) AWEConcernFansLabelView *fansLabelView;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (nonatomic) BOOL showOnlineDotView;
@property (nonatomic) BOOL shouldCenterTitle;
@property (retain, nonatomic) AWEFollowListEntranceContentModel *entranceContentModel;
@property (retain, nonatomic) AWEConcernFansLabelModel *fansLabelModel;

+ (Class)aAWEBrandColorAdapterClass;

- (void)actionBtnClicked;
- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)updateTitleAndDescConstraints;
- (id)aAWEBrandColorAdapter;
- (void)setDescLabelModel:(id)a0;
- (void)setNameLabelModel:(id)a0;
- (BOOL)revertFansLabelLayoutChange;
- (void)updateDesLabel:(id)a0 showBorder:(BOOL)a1;
- (void).cxx_destruct;
- (id)nameLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNameLabel:(id)a0;
- (id)actionButton;
- (void)setActionButton:(id)a0;
- (double)avatarWidth;

@end
