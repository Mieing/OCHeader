@class CAGradientLayer, WCFinderFeedImageCDNView, NSString, WCFinderLiveGenericFeedVM, UIView, WCFinderLiveFeedGenericCoverReportInfo, MMUILabel;
@protocol WCFinderLiveHomePageHistoryCellDelegate;

@interface WCFinderLiveHomePageHistoryCell : WCFinderLiveFeedBaseStyleableCell <WCFinderFeedImageCDNViewDelegate, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) WCFinderFeedImageCDNView *liveImageView;
@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (retain, nonatomic) WCFinderLiveFeedGenericCoverReportInfo *coverReportInfo;
@property (weak, nonatomic) id<WCFinderLiveHomePageHistoryCellDelegate> delegate;
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
- (void)longPress:(id)a0;
- (void)layoutSubviews;
- (void)finderFeedImageLoadFinish;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (void).cxx_destruct;

@end
