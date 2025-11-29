@class UIStackView, UIView, AWEIMActiveUserIndicativeView, UITapGestureRecognizer, NSString, UIImageView, IESIMContactPickerRelationTagView, YYLabel, IESIMContactPickerContentCellModel, UILabel;

@interface IESIMContactPickerContentCell : UICollectionViewCell <UIGestureRecognizerDelegate, IESIMContactPickerContentCellProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *internalAvatarImageView;
@property (retain, nonatomic) UIStackView *centerContainer;
@property (retain, nonatomic) UIStackView *centerTopContainer;
@property (retain, nonatomic) UIStackView *centerBottomContainer;
@property (retain, nonatomic) UIStackView *rightContainer;
@property (retain, nonatomic) UIStackView *leftContainer;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *nameTailingLabel;
@property (retain, nonatomic) YYLabel *statusLabel;
@property (retain, nonatomic) UIStackView *statusStackView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *leftIconImageView;
@property (retain, nonatomic) IESIMContactPickerRelationTagView *relationTag;
@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) AWEIMActiveUserIndicativeView *onlineDotView;
@property (retain, nonatomic) IESIMContactPickerContentCellModel *model;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView *horizontalLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (void)configWithCellModel:(id)a0;
- (void)willDisplayAtIndexPath:(id)a0 needCallBack:(BOOL)a1;
- (void)__setupUI;
- (BOOL)hitStreakUpdateExp;
- (void)didTapped;
- (void)p_setupBackgroundColor;
- (id)attrForText:(id)a0 highlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 attr:(id)a2;
- (void)changeSelectableState:(BOOL)a0;
- (id)attrForText:(id)a0 highlightInfo:(id)a1 attr:(id)a2;
- (void)__configNameLabelWithModel:(id)a0;
- (void)__configAvatarImageViewWithModel:(id)a0;
- (void)__configUILayoutWithModel:(id)a0;
- (void)__configIconImageWithModel:(id)a0;
- (void)__updateAccessibility:(id)a0;
- (void)__addSubViews;
- (void)__layoutContainers;
- (void)__layoutBasicViews;
- (double)centerTopContainerOffsetToRightContainer;
- (double)__duxFontSizeIfNecessary:(double)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
