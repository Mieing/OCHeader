@class MASConstraint, AWEAliasEditLabel, AWEIMFansInsetsLabel;

@interface AWEIMFansTitleContainer : AWEIMFansBaseContainer

@property (retain, nonatomic) AWEIMFansInsetsLabel *relationTagLabel;
@property (retain, nonatomic) MASConstraint *nameLabelTrailingConstraint;
@property (retain, nonatomic) MASConstraint *relationTagLeadingConstraint;
@property (retain, nonatomic) AWEAliasEditLabel *nameLabel;

+ (double)topPaddingForLines;

- (id)accessibilityActions;
- (void)relationLabelTapped;
- (void)updateViewsLayout:(double)a0;
- (void)updateEditAliasStatus:(BOOL)a0;
- (void)updateNameLabelText;
- (void)resetNameLabelEditable;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
