@class NSString, WCFinderHeadImageView, WCFinderLiveGenericFeedVM, UILabel, UIImageView, UIView;

@interface WCFinderLiveHomePageCircleStyleCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveFeedGenericCardCellProtocol>

@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (weak, nonatomic) WCFinderHeadImageView *headImageView;
@property (weak, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *avatarViewCircleStatic;
@property (retain, nonatomic) UIView *avatarTextTipsContainer;
@property (retain, nonatomic) UILabel *avatarTextTipsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightInWidth:(double)a0 styleInfo:(id)a1;
+ (double)cellWidth;
+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)displayTips;
- (id)displayTipsTextColor;
- (id)displayTipsBackgroundColor;
- (id)outlinedSvgImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)displayTipsBlurColor;
- (id)displayContact;
- (void).cxx_destruct;

@end
