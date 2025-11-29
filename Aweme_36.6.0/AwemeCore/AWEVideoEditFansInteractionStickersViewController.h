@class NSArray, UICollectionView, NSDictionary, UILabel, UIView, NSString;
@protocol AWEVideoEditFansInteractionStickersVCDelegate;

@interface AWEVideoEditFansInteractionStickersViewController : ACCStickerPannelAnimationVC <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *slideLineView;
@property (retain, nonatomic) UILabel *desLabel;
@property (copy, nonatomic) NSArray *effects;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<AWEVideoEditFansInteractionStickersVCDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL hasLiveSticker;
@property (nonatomic) BOOL hasPollSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_fetchData;
- (void)dismissPanel;
- (void)trackStickerWithIndexPath:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewInsets;
- (double)collectionViewHeight;
- (id)stickerType;

@end
