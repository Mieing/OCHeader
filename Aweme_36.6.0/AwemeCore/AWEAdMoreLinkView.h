@class UIColor, NSString, UIImageView, NSArray, UILabel, UIView, AWETagLabelModel;

@interface AWEAdMoreLinkView : UIView <AWEAdMoreLinkView>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) double tagAlpha;
@property (nonatomic) BOOL isHollow;
@property (retain, nonatomic) UIColor *tagColor;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIImageView *searchDouPlusIconView;
@property (copy, nonatomic) NSString *tagImageName;
@property (copy, nonatomic) NSArray *linkIcons;
@property (nonatomic) long long decPaddingX;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) AWETagLabelModel *tagModel;
@property (nonatomic) BOOL withPanelGuide;
@property (nonatomic) BOOL isShowSearchDouPlusIcon;
@property (nonatomic) double defaultTagLabelFontSize;
@property (nonatomic) double defaultTagLinkLabelFontSize;
@property (nonatomic) double marginBetweenIconAndTag;
@property (nonatomic) BOOL labelOnly;
@property (nonatomic) BOOL adaptLightTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTagLabel:(id)a0 padding:(long long)a1 adaptLightTheme:(BOOL)a2;
- (id)initWithContent:(id)a0 alpha:(double)a1 tagImageName:(id)a2 serverImages:(id)a3 height:(double)a4;
- (void)setTagImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTagTextFont:(id)a0;
- (void)setTagBackgroundColor:(id)a0;
- (id)initWithContent:(id)a0 height:(double)a1;
- (id)initWithContent:(id)a0 alpha:(double)a1;
- (id)initWithContent:(id)a0 alpha:(double)a1 tagImageName:(id)a2;
- (id)initWithContent:(id)a0 alpha:(double)a1 tagImageName:(id)a2 height:(double)a3;
- (id)initWithTagLabel:(id)a0;
- (id)initWithTagLabel:(id)a0 padding:(long long)a1;
- (id)initWithTagLabel:(id)a0 containerHeight:(double)a1;
- (id)initWithTagLabel:(id)a0 padding:(long long)a1 adaptLightTheme:(BOOL)a2 containerHeight:(double)a3;
- (void)configWithLabelModel:(id)a0;
- (void)updateAdMoreLinkViewUIWithSearchDouPlus:(id)a0;
- (void)setUIWithPanelGuide;
- (void)setLabelTextFont:(id)a0;
- (void)setLabelLeft:(double)a0;
- (void)setLabelShadow:(double)a0 shadowOffsetOfX:(double)a1 shadowOffsetOfY:(double)a2 shadowOpacity:(double)a3 shadowRadius:(double)a4;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (id)snapshot;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContent:(id)a0;
- (id)defaultText;
- (void)setupUI;
- (void)setLabelTextColor:(id)a0;
- (void)layoutUI;

@end
