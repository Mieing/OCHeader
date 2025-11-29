@class HTSLiveFaceStickerSearchBar, HTSLiveFaceStickerHashtagView, NSString, UILabel, UIPanGestureRecognizer;
@protocol IESLiveEffectPanelSearchCellDataSource, IESLiveEffectPanelSearchCellDelegate;

@interface IESLiveEffectPanelSearchCell : IESLiveEffectPanelContentCell <HTSLiveStickerSearchBarDelegate, HTSLiveStickerPickerHashtagViewDelegate>

@property (retain, nonatomic) HTSLiveFaceStickerHashtagView *hashTagView;
@property (retain, nonatomic) UILabel *searchEmptyLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *panRecognizer;
@property (weak, nonatomic) id<IESLiveEffectPanelSearchCellDataSource> searchDatasource;
@property (weak, nonatomic) id<IESLiveEffectPanelSearchCellDelegate> searchDelegate;
@property (retain, nonatomic) HTSLiveFaceStickerSearchBar *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContextCallOnce;
- (void)stickerPickerHashtagView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)currentSelectEffectId;
- (id)effectModelForIndex:(long long)a0;
- (void)reloadDataWithContentIndex:(long long)a0;
- (void)configSearchView;
- (void)popupSearchViewHandleSwipe:(id)a0;
- (void)addEndEditingGesture;
- (void)removeEndEditingGesture;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
