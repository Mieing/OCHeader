@class UIImage, NSString, NSAttributedString;

@interface IESECNavigationItem : IESECButton

@property (nonatomic) long long type;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL sel;

- (void).cxx_destruct;

@end
