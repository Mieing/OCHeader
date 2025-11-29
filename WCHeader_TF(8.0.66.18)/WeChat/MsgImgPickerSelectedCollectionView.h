@class NSString, UICollectionView, NSMutableSet, SimpleMsgInfo, NSMutableArray;
@protocol MsgImgPickerSelectedCollectionViewDelegate;

@interface MsgImgPickerSelectedCollectionView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) SimpleMsgInfo *selectedMsgInfo;
@property (retain, nonatomic) NSMutableSet *disabledMsgInfo;
@property (weak, nonatomic) id<MsgImgPickerSelectedCollectionViewDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *previewMsgInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getCollectionViewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initData;
- (void)initView;
- (void)initCollectionView;
- (void)layoutSubviews;
- (void)reloadDataView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)changeToMsgInfo:(id)a0;
- (id)indexPathForMsgInfo:(id)a0;
- (void)insertItemAtIndex:(unsigned long long)a0;
- (void)deleteItemAtIndex:(unsigned long long)a0;
- (void)toggleSelectMsgInfo:(id)a0;
- (void)handlelongGesture:(id)a0;
- (void).cxx_destruct;

@end
