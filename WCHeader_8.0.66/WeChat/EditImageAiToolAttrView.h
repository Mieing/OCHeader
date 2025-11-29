@class NSString, NSMutableArray, UICollectionView;
@protocol EditImageAiToolAttrViewDelegate;

@interface EditImageAiToolAttrView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MMWebViewDelegate, IWebviewResourceManagerExt>

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL portrait;
@property (nonatomic) BOOL retLivePhoto;
@property (retain, nonatomic) NSString *ybTemplateId;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<EditImageAiToolAttrViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showYuanBaoConfirmSheetWithHanlder:(id /* block */)a0 cancelHandler:(id /* block */)a1 bindVC:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)onUIImageReady:(id)a0;
- (void)reportYuanBaoSelect;
- (void)initLocalTempalteList:(BOOL)a0;
- (void)requestUpdateTemplateList:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didSelectItemAtIndexPathImpl:(id)a0;
- (void)onWebViewWillClose:(id)a0;
- (void).cxx_destruct;

@end
