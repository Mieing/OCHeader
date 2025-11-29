@class NSArray, NSNumber, NSMutableArray;

@interface IESLiveGameInteractStickerView : UIView

@property (copy, nonatomic) NSArray *stickerModels;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSMutableArray *stickerViews;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) id /* block */ didLoadFinishedBlock;
@property (copy, nonatomic) id /* block */ didCloseCallback;

- (void)setupSubViews:(id)a0;
- (void)destroySubViews;
- (void)updateStickerModels:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stickerModels:(id)a1 roomID:(id)a2 didLoadFinishedBlock:(id /* block */)a3;
- (void)addOrientationObserver;
- (id)setupStickerView:(id)a0;
- (id)getReusedStickerViewWithModel:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)handleOrientationChange:(id)a0;

@end
