@class UIView, WCFinderLiveCardProductShowcase, FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions, NSString, MMFinderLiveFeedHighlightTagView, NSMutableArray, WCFinderAuthInfoIconView, WCFinderHeadImageView, UILabel, RichTextView;
@protocol WCFinderLiveTopicTemplateLargeCellDelegate;

@interface WCFinderLiveTopicTemplateLargeCell : WCFinderLiveFeedGenericCdnCell <ILinkEventExt>

@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) RichTextView *nicknameTV;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) MMFinderLiveFeedHighlightTagView *highlightTagView;
@property (retain, nonatomic) UIView *avatorTapView;
@property (retain, nonatomic) UILabel *audienceNumLabel;
@property (retain, nonatomic) NSMutableArray *productViews;
@property (retain, nonatomic) WCFinderLiveCardProductShowcase *curProductShowcase;
@property (retain, nonatomic) FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *hotSellingOptions;
@property (weak, nonatomic) id<WCFinderLiveTopicTemplateLargeCellDelegate> delegate;
@property (nonatomic) BOOL hideAudienceNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initViewsIfNeeded;
- (void)updateWithFeedVM:(id)a0;
- (void)prepareForReuse;
- (void)updateWithProductShowcase:(id)a0;
- (void)updateWithHotSellingOptions:(id)a0;
- (void)resetSubviews;
- (void)initSubviewsIfNeeded;
- (void)layoutSubviews;
- (void)relayoutNickname;
- (void)setupProductsIfNeeded;
- (BOOL)isPlayingLive;
- (void)updateHighLightTag;
- (void)onFeedHighlightTagUpdate;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onAvatorTapped;
- (void)onProductTapped:(id)a0;
- (id)getAudienceNumWordingWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
