@class UIImageView, UILabel, UIView;
@protocol IESECLiveImageLabelDelegate;

@interface IESECLiveImageLabel : UIView {
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _labelSize;
    struct CGSize { double width; double height; } _latestSize;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
@property (nonatomic) double imageHeight;
@property (nonatomic) struct CGSize { double width; double height; } textSize;
@property (weak, nonatomic) id<IESECLiveImageLabelDelegate> delegate;

- (void)p_updateConstraints;
- (void)setImageURL:(id)a0 placeHolder:(id)a1;
- (void)p_didSetImage:(id)a0;
- (void)p_didSetText:(id)a0;
- (void)p_didSetAttributedText:(id)a0;
- (struct CGSize { double x0; double x1; })imageDrawSize:(id)a0;
- (void)setImageURL:(id)a0 placeHolder:(id)a1 shouldUpdate:(id /* block */)a2;
- (void)updateAttributedText:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)updateText:(id /* block */)a0;

@end
