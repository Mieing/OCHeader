@class WCFinderRedDotTipsShowInfo, NSString, MMBadgeView, UIImage, WCFinderAnimationLoadingView, UIImageView, NSURL, UILabel, UIColor;
@protocol WCFinderTLTabButtonDelegate;

@interface WCFinderTLTabButton : MMUIButton

@property (retain, nonatomic) MMBadgeView *redDotView;
@property (retain, nonatomic) UILabel *redDotTextField;
@property (retain, nonatomic) UIImageView *liveIconView;
@property (nonatomic) long long imageStyle;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSString *leftIconText;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) long long refreshStyle;
@property (weak, nonatomic) id<WCFinderTLTabButtonDelegate> delegate;
@property (nonatomic) unsigned long long tabType;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSURL *leftIconUrl;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *redDotInfo;
@property (nonatomic) double selectedValue;
@property (nonatomic) double bottomLineExpectExtWidth;
@property (nonatomic) BOOL shouldShowLeftIcon;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLeftIcon:(id)a0 withText:(id)a1;
- (void)setButtonNormalColor:(id)a0 highlightColor:(id)a1;
- (void)cleanLeftAvatarImage;
- (void)setRefreshWithImageStyle:(long long)a0 refreshStyle:(long long)a1;
- (void)cleanRefreshState;
- (void)setIconWithImageStyle:(long long)a0 selectedIcon:(id)a1 normalIcon:(id)a2;
- (void)setSelected:(BOOL)a0;
- (void)onButtonDidChangedSelectedFinish;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)doLayout;
- (void)layoutAddedImageView:(id)a0 addedImageSize:(struct CGSize { double x0; double x1; })a1 imageTitlePadding:(double)a2;
- (void).cxx_destruct;

@end
