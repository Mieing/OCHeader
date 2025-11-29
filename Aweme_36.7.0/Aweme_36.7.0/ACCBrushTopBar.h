@class UILongPressGestureRecognizer, NSArray, NSString, UICollectionView, DVEEffectValue, UIButton;
@protocol ACCBrushTopBarDelegate;

@interface ACCBrushTopBar : DVEBaseBrushTopBar <ACCBrushEffectValueListProtocol> {
    UIButton *_doneButton;
    UICollectionView *_brushListView;
}

@property (retain, nonatomic) UIButton *undoButton;
@property (retain, nonatomic) UIButton *redoButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) double longPressTime;
@property (retain, nonatomic) UILongPressGestureRecognizer *longpressGesture;
@property (retain, nonatomic) NSArray *assetImages;
@property (nonatomic) BOOL newUI;
@property (weak, nonatomic) id<ACCBrushTopBarDelegate> delegate;
@property (retain, nonatomic) DVEEffectValue *currentBrushValue;
@property (retain, nonatomic) NSArray *brushValues;
@property (nonatomic) BOOL finishedLoadBrushes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)brushValuesName;
- (id)initWithNewUI:(BOOL)a0;
- (id)brushListView;
- (void)didClickUndo;
- (void)didClickRedo;
- (void)didClickedCancel;
- (void)didLongPressUndo;
- (void)setBrushListView:(id)a0;
- (void)didClickedDone;
- (void).cxx_destruct;
- (id)doneButton;
- (void)setDoneButton:(id)a0;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
