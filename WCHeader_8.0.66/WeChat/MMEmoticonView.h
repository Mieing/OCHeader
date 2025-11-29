@class UIImageView, CEmoticonWrap;

@interface MMEmoticonView : UIView {
    double m_imageScale;
    UIImageView *m_animatedImageView;
}

@property (readonly, nonatomic) CEmoticonWrap *emoticonWrap;
@property (nonatomic) double maxSize;
@property (nonatomic) double minSize;
@property (nonatomic) double imageScale;
@property (nonatomic) struct CGSize { double width; double height; } noImageSize;
@property (nonatomic) BOOL forceAdjustViewSize;
@property (nonatomic) BOOL asyncLoadFirstFrame;
@property (nonatomic) BOOL shouldCheckWxamValid;

+ (struct CGSize { double x0; double x1; })contentImageSizeForOriginSize:(struct CGSize { double x0; double x1; })a0 minSize:(double)a1 maxSize:(double)a2;
+ (struct CGSize { double x0; double x1; })contentImageSizeForOriginSize:(struct CGSize { double x0; double x1; })a0 minSize:(double)a1 maxSize:(double)a2 scale:(double)a3;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustSettingForPreview;
- (void)adjustSettingForMessage;
- (void)adjustSettingForFinderComment;
- (void)adjustSettingForFitWidth:(double)a0;
- (struct CGSize { double x0; double x1; })calSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })contentImageSizeForOriginSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGSize { double x0; double x1; })contentImageSizeForOriginSize:(struct CGSize { double x0; double x1; })a0 emoticonWrap:(id)a1;
- (id)getFirstFrameImage;
- (BOOL)formImageView:(id)a0;
- (BOOL)formImageView:(id)a0 newSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)formGifView:(BOOL)a0;
- (BOOL)checkWxamValidWithDecoder:(id)a0;
- (void)setImageHidden:(BOOL)a0;
- (BOOL)setEmoticonWrap:(id)a0 PlayGif:(BOOL)a1;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;

@end
