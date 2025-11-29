@class MMMusicMVEditorCardCell, UIImageView, UIImage, UIView, UICollectionView, UIButton;

@interface MMMusicPostVideoAnimHelper : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _thumbFrameInVC;
    UIImage *_thumbImage;
    MMMusicMVEditorCardCell *_curCell;
    UIView *_selfViewInVC;
    UIImageView *step1AnimView;
    UIImageView *step2AnimView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } step3Frame;
    UIView *step3CropView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } step3CropViewFrame;
    UIView *doneCropView;
    UIView *doneThumbImageView;
    UIView *cancelCropView;
    UIView *cancelThumbImageView;
    UIView *cancelCellView;
    BOOL isRecropMode;
    UIView *recropCellView;
    UIImageView *recropVideoFirstFrameView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recropVideoFrame;
    UIView *recropCropView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recropCropViewFrame;
    UICollectionView *m_collectionView;
    UIButton *m_cancelBtn;
    UIButton *m_doneBtn;
    UIView *m_titleLabel;
}

- (id)initWithCollectionView:(id)a0 cancelBtn:(id)a1 doneBtn:(id)a2 titleLabel:(id)a3;
- (void)dealloc;
- (void)updateWithCurCell:(id)a0 selfViewInVC:(id)a1;
- (void)updateWithThumbFrameInVC:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 thumbImage:(id)a1 curCell:(id)a2 selfViewInVC:(id)a3 editVideoPlayerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 editVideoCropView:(id)a5;
- (void)startAnimWithOnStepOneBlock:(id /* block */)a0 stepTwoBlock:(id /* block */)a1 stepThreeAnimBlock:(id /* block */)a2 stepThreeBlock:(id /* block */)a3;
- (void)startAnimWhenClickCropBtn:(id)a0 cropView:(id)a1 editVideoPlayerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 curVideoFirstFrameImage:(id)a3 animBlock:(id /* block */)a4 doneBlock:(id /* block */)a5;
- (void)startAnimWhenCropCancel:(id)a0 cropView:(id)a1 thumbImage:(id)a2 editVideoPlayerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 animBlock:(id /* block */)a4 doneBlock:(id /* block */)a5;
- (void)startAnimWhenCropDoneWithCropView:(id)a0 thumbImage:(id)a1 editVideoPlayerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 animBlock:(id /* block */)a3 doneBlock:(id /* block */)a4;
- (void)createStep1View;
- (id)createStep2View:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createDoneThumbImageView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)createCancelThumbImageView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)createCancelCellView;
- (id)createCurCellViewViewSnapshot;
- (void)createRecropVideoFirstFrameView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
