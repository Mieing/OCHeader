@class NSArray, NSMutableArray, NSString;
@protocol EmoticonGridViewDelegate;

@interface EmoticonGridView : MMUIView <EmoticonDescMgrExt, EmoticonViewWithPreviewDelegate>

@property (retain, nonatomic) NSMutableArray *emoticonViewArray;
@property (retain, nonatomic) NSArray *emoticonWrapArray;
@property (retain, nonatomic) NSString *packageId;
@property (nonatomic) long long column;
@property (nonatomic) long long row;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;
@property (nonatomic) double edgeTop;
@property (nonatomic) double edgeLeft;
@property (nonatomic) double intervalX;
@property (nonatomic) double intervalY;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) BOOL needAdjustPreviewColor;
@property (weak, nonatomic) id<EmoticonGridViewDelegate> delegate;
@property (nonatomic) BOOL shouldDisableRemoteDesc;
@property (nonatomic) BOOL shouldDisableDescUpdateExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)customPackageId;
- (id)cameraPackageId;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)emoticonKey;
- (id)buttonKey;
- (void)reloadData;
- (void)adjustPreviewComponetColorIfNeed:(id)a0 emoticonWrap:(id)a1;
- (void)hideAllFocus;
- (void)onLongPressWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)getRealIndexFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)getPreviewSuperview;
- (void)onGetEmoticonDesc:(id)a0 descList:(id)a1;
- (void).cxx_destruct;

@end
