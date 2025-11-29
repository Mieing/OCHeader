@class YYLabel, UIImageView, UIVisualEffectView, UIView, AWEIMInputActionBarEntryItem;

@interface AWEIMInputActionBarFansGroupEntryViewCollectionViewCell : UICollectionViewCell

@property (nonatomic, getter=isFilled) BOOL filled;
@property (nonatomic) BOOL isLightStyle;
@property (retain, nonatomic) AWEIMInputActionBarEntryItem *entryItem;
@property (retain, nonatomic) UIView *contentsContainer;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (nonatomic) BOOL isOwnerStyle;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (nonatomic) BOOL hasBackgroundImage;

+ (id)__displayAttributedStringFromItem:(id)a0 isOwner:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })__attributedTextDisplayForEntryItem:(id)a0 isOwner:(BOOL)a1;
+ (id)fontWithIsOwner:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })sizeWithEntryItem:(id)a0 isOwner:(BOOL)a1;
+ (id)identifier;

- (void)addBlurView;
- (void)removeBlurView;
- (void)__refreshBasicUI;
- (void)__resetAttributedContent;
- (void)__resetDisplayIcon;
- (void)__resetServerConfiguredIconIfNeeded;
- (id)p_getInteractiveEmoticonIconURL;
- (void)__configAccessibilityInfo;
- (id)p_getIconURL;
- (void)renderWithModel:(id)a0 isOwner:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
