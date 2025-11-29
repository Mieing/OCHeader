@class UIImageView, UILabel, NSString;
@protocol AWEIMMultiSelectListPopupCollectionViewCellDelegate, AWEIMMultiSelectPopupItemProtocol;

@interface AWEIMMultiSelectListPopupCollectionViewCell : UICollectionViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) id<AWEIMMultiSelectPopupItemProtocol> model;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *isSelectedImageView;
@property (weak, nonatomic) id<AWEIMMultiSelectListPopupCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)p_addSubviews;
- (id)nameLabelFont;
- (void)p_addPositionConstraints;
- (id)colorInLightTheme:(id)a0;
- (void)p_configSelectedImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hintLabelFont;
- (int)avatarWidth;

@end
