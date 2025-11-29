@class NSString, WCFinderLiveTagListCollectionView, WCFinderLiveTagListCollectionViewConfig;
@protocol WCFinderMoreLiveTagListHeaderViewDelegate;

@interface WCFinderMoreLiveTagListHeaderView : UICollectionViewCell <WCFinderLiveTagListCollectionViewDelegate>

@property (retain, nonatomic) WCFinderLiveTagListCollectionView *tagListView;
@property (retain, nonatomic) WCFinderLiveTagListCollectionViewConfig *config;
@property (weak, nonatomic) id<WCFinderMoreLiveTagListHeaderViewDelegate> delegate;
@property (nonatomic) BOOL forceDarkMode;
@property (nonatomic) unsigned long long commentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)updateWithSubTabList:(id)a0 wholeTabInfo:(id)a1 selectTabInfo:(id)a2;
- (void)onTagListView:(id)a0 didSelectedItem:(id)a1 isToggle:(BOOL)a2;
- (BOOL)canTagListViewUnToggle:(id)a0 unToggleItem:(id)a1 toggleItem:(id)a2;
- (void).cxx_destruct;

@end
