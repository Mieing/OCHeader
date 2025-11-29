@class UIView, NSString, WCFinderFeedImageCDNView, WCFinderLiveGenericFeedVM, WCFinderLiveFeedGenericCoverReportInfo, CAGradientLayer, WCFinderHeadImageView, MMUILabel;

@interface WCFinderLiveHomePageFollowCell : WCFinderLiveFeedBaseStyleableCell <WCFinderFeedImageCDNViewDelegate, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) UIView *headImageBorderView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *liveImageView;
@property (retain, nonatomic) CAGradientLayer *mainColorGradientLayer;
@property (retain, nonatomic) CAGradientLayer *shadowGradientLayer;
@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (retain, nonatomic) WCFinderLiveFeedGenericCoverReportInfo *coverReportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)a0 styleInfo:(id)a1;
+ (double)cellWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)finderFeedImageLoadFinish;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (void).cxx_destruct;

@end
