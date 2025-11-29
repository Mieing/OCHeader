@class NSString, UICollectionView, HTSEventContext, NSMutableArray;

@interface IESLiveMultiCameraListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, HTSLiveStreamPlayerAction, IESLiveFIFAPlayerScaleAction, IESLiveRelatedLiveListViewProtocol, IESLiveMultiCameraListViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *camerasData;
@property (retain, nonatomic) NSString *curCameraID;
@property (nonatomic) long long listType;
@property (nonatomic) double currentCameraStartChangeTime;
@property (nonatomic) BOOL hasFirstUserInteractAction;
@property (nonatomic) BOOL streamAbnormalShow;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ userInteractAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ extraShowParams;
@property (copy, nonatomic) id /* block */ extraClickParams;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)didSetAttachingDIContext;
- (void)streamPlayerDidReadyToRender;
- (void)onChangeAbnormalViewShow:(BOOL)a0;
- (struct CGSize { double x0; double x1; })listViewCellSize;
- (void)trackMultiCameraItemShowParams:(id)a0 selected:(BOOL)a1;
- (void)trackMultiCameraItemClickParams:(id)a0;
- (void)selectCameraOutside:(id)a0;
- (void)resetTrackData;
- (void)trackMultiCameraChangeDuration;
- (void)updateWithCameras:(id)a0 curCameraID:(id)a1;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)refresh;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;
- (id)initWithListType:(long long)a0;

@end
