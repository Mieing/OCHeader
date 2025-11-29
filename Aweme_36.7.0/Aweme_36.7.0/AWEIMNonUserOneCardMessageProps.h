@class UIImage, UIView;

@interface AWEIMNonUserOneCardMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (nonatomic) struct CGSize { double width; double height; } oneCardViewSize;
@property (retain, nonatomic) UIView *oneCardView;
@property (retain, nonatomic) UIImage *coverImage;

- (void).cxx_destruct;

@end
