@class NSString, NSArray, BlackoutView, AWESearchPhotoSelectionHandleView, UIImageView, NSMutableArray, AWESearchDotAnimationView, UIVisualEffectView, UIScrollView;
@protocol AWESearchPhotoSearchBackgroundViewDelegate;

@interface AWESearchPhotoSearchBackgroundView : UIView <AWESearchPhotoSelectionHandleViewDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) BlackoutView *alternateBG;
@property (retain, nonatomic) NSArray *rawDetections;
@property (readonly, nonatomic) AWESearchPhotoSelectionHandleView *activeHandleView;
@property (retain, nonatomic) NSMutableArray *selectionHandleViewArray;
@property (retain, nonatomic) NSMutableArray *selectionDotViewArray;
@property (retain, nonatomic) NSArray *selectionRectArray;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) AWESearchPhotoSelectionHandleView *customHandleView;
@property (retain, nonatomic) AWESearchDotAnimationView *customDotView;
@property (nonatomic) BOOL onlyShowImage;
@property (nonatomic) BOOL hasDragPanel;
@property (nonatomic) BOOL optimiseEnable;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<AWESearchPhotoSearchBackgroundViewDelegate> delegate;
@property (retain, nonatomic) UIVisualEffectView *imageEffectView;
@property (readonly, nonatomic) NSArray *tabViewModels;
@property (readonly, nonatomic) BOOL hasCustomHandleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)updateImage:(id)a0;
- (void)configUIWithProductImage:(id)a0;
- (void)configBackgroundImageIsBlock:(BOOL)a0;
- (void)updateDetectionArray:(id)a0 withSelectionIndex:(unsigned long long)a1;
- (void)updateSubviewFrame;
- (id)handleViewAtIndex:(unsigned long long)a0;
- (id)convertSelectionRectToDetctionStr:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertDetctionStringToDetctionRect:(id)a0;
- (void)updateSelectionIndex:(unsigned long long)a0;
- (void)showDotView:(id)a0 isShow:(BOOL)a1;
- (id)createDotView;
- (void)updateMaskViewWithHanleViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertSelectionRectWithDetectionString:(id)a0;
- (id)dotViewAtIndex:(unsigned long long)a0;
- (void)closeSelectionIndex:(unsigned long long)a0 expandIndex:(unsigned long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)scrollGestureRecognizer;
- (void)handleViewSelectionChanged:(id)a0;
- (void)handleViewSelectionChangeEnded:(id)a0;
- (id)initWithProductImage:(id)a0;
- (id)initFlowCaseWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initOnlyShowBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWhiteBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initBlackBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configOnlyShowWhiteBg;
- (struct CGPoint { double x0; double x1; })convertImageCoordinateToViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)createLayerWithPath:(id)a0;
- (void)showDetectionExpandAnimation:(BOOL)a0 atIndex:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)detections;

@end
