@class NSString, UIImageView, AWECustomStickerCropView, UIView;
@protocol AWECustomStickerEditContainerDelegate;

@interface AWECustomStickerEditContainer : UIView <CAAnimationDelegate, AWECustomStickerCropViewDelegate>

@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *originImageView;
@property (retain, nonatomic) UIImageView *processedContentView;
@property (retain, nonatomic) AWECustomStickerCropView *cropView;
@property (nonatomic) BOOL edited;
@property (nonatomic) double imageScale;
@property (weak, nonatomic) id<AWECustomStickerEditContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })containerSizeWithImageSize:(struct CGSize { double x0; double x1; })a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)aspectRatioWithImageSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;

- (void)trackClick:(id)a0;
- (id)initWithImage:(id)a0 aspectRatio:(double)a1;
- (id)finishCrop;
- (void)applyUseProcessed:(BOOL)a0;
- (void)showCropEditView:(BOOL)a0 withImage:(id)a1 maxRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateWithImage:(id)a0 aspectRatio:(double)a1 isClipped:(BOOL)a2;
- (void)processWithResult:(id)a0 points:(id)a1 maxRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)editRedoTriggered;
- (void)editCancelTriggered;
- (void)editResetTriggered:(id)a0;
- (void)cancelListIsEmpty:(BOOL)a0;
- (void)redoListIsEmpty:(BOOL)a0;
- (void)isReseted:(BOOL)a0;
- (void)setupUIWithImage:(id)a0;
- (void)processShowClipResult;
- (void).cxx_destruct;
- (void)isEdited:(BOOL)a0;

@end
