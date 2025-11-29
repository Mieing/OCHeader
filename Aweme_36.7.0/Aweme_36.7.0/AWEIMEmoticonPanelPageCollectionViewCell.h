@class UILongPressGestureRecognizer, NSString, UICollectionView, AWEIMEmoticonLoadingView, UIView, AWEIMEmoticonPreviewHelper;
@protocol AWEIMEmoticonPanelPage, AWEIMEmoticonActionComponent;

@interface AWEIMEmoticonPanelPageCollectionViewCell : UICollectionViewCell <AWEIMEmoticonPanelPageCollectionViewCell, AWEIMEmoticonPreviewHelperDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMEmoticonPreviewHelper *previewHelper;
@property (retain, nonatomic) UILongPressGestureRecognizer *previewLongPressGuesture;
@property (retain, nonatomic) UIView *panelContentView;
@property (retain, nonatomic) UIView *emptyContentView;
@property (retain, nonatomic) AWEIMEmoticonLoadingView *loadingView;
@property (weak, nonatomic) id<AWEIMEmoticonActionComponent> actionComponent;
@property (nonatomic) BOOL enableDrag;
@property (nonatomic) unsigned long long pageState;
@property (weak, nonatomic) id<AWEIMEmoticonPanelPage> page;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelGestureRecognizers;
- (void)didEndDisplayingCell;
- (void)p_setupLoadingView;
- (void)setImageViewsAnimationPause:(BOOL)a0;
- (id)previewHelper:(id)a0 emotionModelAtIndexPath:(id)a1;
- (void)createEmptyViewWithEmptyContentView:(id)a0;
- (void)setPanelContentViewHidden:(BOOL)a0;
- (void)previewHelper:(id)a0 beginPreviewEmotionModel:(id)a1;
- (void)p_pageStateUpdatedWithNewValue:(unsigned long long)a0 oldValue:(unsigned long long)a1;
- (void)p_setupEmptyContentView;
- (void)p_setupStatusView:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleLongPressGesture:(id)a0;
- (void)willDisplayCell;
- (void)retryButtonPressed:(id)a0;

@end
