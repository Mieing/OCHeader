@class WCFinderProfileCollectionListView, NSString, WCFinderTagListView;
@protocol WCFinderProfileFeedPageHeaderContainerViewDelegate;

@interface WCFinderProfileFeedPageHeaderContainerView : UICollectionReusableView <WCFinderTagListViewDelegate, WCFinderProfileCollectionListViewDelegate>

@property (retain, nonatomic) WCFinderTagListView *tagListView;
@property (retain, nonatomic) WCFinderProfileCollectionListView *collectionListView;
@property (weak, nonatomic) id<WCFinderProfileFeedPageHeaderContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTagListViewOptions;
+ (double)displayHeightWithTagLayout:(id)a0 collectionLayout:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureSubviewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithoutNotifyTagLayout:(id)a0 selectedTopic:(id)a1 collectionLayout:(id)a2;
- (void)updateWithTagLayout:(id)a0 selectedTopic:(id)a1 collectionLayout:(id)a2;
- (void)onTagListView:(id)a0 onSelectedItem:(id)a1;
- (void)onTagListViewIsExpandChanged:(id)a0 isExpand:(BOOL)a1;
- (void)clickedNextEpisodeButton;
- (void)clickedAllEpisodeButton;
- (void)clickedCollectionItemWithInfo:(id)a0;
- (void)clickedMoreButton;
- (void)collectionListDisplayHeightChanged;
- (void)setupReportWithNextEpisodeBtn:(id)a0 allEpisodeBtn:(id)a1 moreBtn:(id)a2;
- (void)setupReportWithCollectionItemButtons:(id)a0;
- (void).cxx_destruct;

@end
