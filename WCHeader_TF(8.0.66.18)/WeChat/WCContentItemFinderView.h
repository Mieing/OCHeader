@class UIView, NSString, WCFinderMediaInfo, WCContentItemFinderViewModel, NSURL, UIImageView, WCFinderDataItem, WCFinderFeedMediaWrap, UIImage, MMUIButton, UILabel, SightIconView;

@interface WCContentItemFinderView : WCContentItemBaseView <ServiceAuthExt, MMImageLoaderObserver, WCFinderZoomAnimatorBehavior, WCFinderShareAbstractCell>

@property (retain, nonatomic) NSString *parentTid;
@property (retain, nonatomic) WCContentItemFinderViewModel *viewModel;
@property (retain, nonatomic) WCFinderDataItem *refFinderDataItem;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) NSURL *fullScreenImageURL;
@property (retain, nonatomic) UIImage *fullScreenImage;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIView *hlView;
@property (nonatomic) BOOL playFullScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromRect;
@property (nonatomic) double lastTime;
@property (retain, nonatomic) MMUIButton *memberFlagButton;
@property (nonatomic) BOOL needSilencePlay;
@property (nonatomic) BOOL ignoresRequestFinderRelatedFeeds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)dealloc;
- (void)preLoad:(id)a0;
- (void)initViewsWithWCContentItem:(id)a0;
- (void)layoutDefault:(id)a0;
- (void)layoutPureText:(id)a0;
- (void)layoutCardStyle:(id)a0;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)onLongTouch;
- (void)onSilencePlay;
- (void)onFavoriteAdd;
- (id)zoomAnimatorTransitionSnapView:(id)a0 cornerRaidus:(double *)a1;
- (BOOL)zoomAnimiatorShouldCacheSnapView;
- (void)onAnimatorWillBeginClosure:(id)a0;
- (void)onAnimatorDidEndClosure:(id)a0;
- (id)zoomAnimatorKey;
- (id)transitionStartImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionStartImageRectInView:(id)a0 willPresent:(BOOL)a1;
- (void)doShareAnimation;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)loadFinderImages;
- (void)cancelLoadFinderImages;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void).cxx_destruct;

@end
