@class UIView, AWERelationListDescLabelModel, NSArray, UIImageView, AWERelationListNameLabelModel, DUXButton, AWERelationListNameLabel, AWERelationListActionButtonModel;

@interface AWERelationListUserBaseCell : UICollectionViewCell

@property (readonly, nonatomic) double avatarWidth;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWERelationListNameLabel *nameLabel;
@property (retain, nonatomic) DUXButton *actionButton;
@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) BOOL readActionButtonForAccessibility;
@property (copy, nonatomic) id /* block */ actionButtonClickBlock;
@property (copy, nonatomic) id /* block */ editAliasButtonClickBlock;
@property (copy, nonatomic) id /* block */ trackLiveCellDisplay;
@property (copy, nonatomic) id /* block */ liveMaskTapAction;
@property (copy, nonatomic) id /* block */ moreIconTapAction;
@property (copy, nonatomic) id /* block */ avatarTapAction;
@property (copy, nonatomic) id /* block */ storyRingClick;
@property (retain, nonatomic) NSArray *avatarURLs;
@property (retain, nonatomic) AWERelationListActionButtonModel *actionButtonModel;
@property (retain, nonatomic) AWERelationListNameLabelModel *nameLabelModel;
@property (retain, nonatomic) AWERelationListDescLabelModel *descLabelModel;

- (void)actionBtnClicked;
- (void).cxx_destruct;
- (id)defaultImage;

@end
