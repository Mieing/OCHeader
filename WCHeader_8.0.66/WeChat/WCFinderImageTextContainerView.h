@class UIImageView, RichTextView, NSString;
@protocol WCFinderImageTextContainerViewDelegate;

@interface WCFinderImageTextContainerView : MMUIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) RichTextView *richTextView;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<WCFinderImageTextContainerViewDelegate> delegate;
@property (copy, nonatomic) NSString *imageName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 delegate:(id)a2;
- (void)updateWithImageName:(id)a0 content:(id)a1;
- (void)onClickTapGes;
- (void)enableClick:(BOOL)a0 disableColor:(id)a1;
- (void).cxx_destruct;

@end
