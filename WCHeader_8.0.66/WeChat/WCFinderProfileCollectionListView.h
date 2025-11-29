@class MMUIButton, WCFinderProfileCollectionListStyle, NSMutableArray, WCFinderProfileCollectionListLayout;
@protocol WCFinderProfileCollectionListViewDelegate;

@interface WCFinderProfileCollectionListView : UICollectionReusableView

@property (retain, nonatomic) WCFinderProfileCollectionListLayout *layout;
@property (retain, nonatomic) WCFinderProfileCollectionListStyle *style;
@property (retain, nonatomic) NSMutableArray *listItemButtons;
@property (retain, nonatomic) MMUIButton *nextEpisodeButton;
@property (retain, nonatomic) MMUIButton *allEpisodeButton;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (weak, nonatomic) id<WCFinderProfileCollectionListViewDelegate> delegate;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureExtraButtons;
- (void)prepareForReuse;
- (void)updateWithLayout:(id)a0;
- (void)setupCollectionListItemButtonsWith:(id)a0;
- (id)createCollectionListItemButton;
- (void)nextEpisodeButtonClicked:(id)a0;
- (void)allEpisodeButtonClicked:(id)a0;
- (void)collectionItemButtonClicked:(id)a0;
- (void)moreButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
