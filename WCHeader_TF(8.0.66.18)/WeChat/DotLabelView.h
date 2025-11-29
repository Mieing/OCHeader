@class UILabel, UIFont, UIView;

@interface DotLabelView : UIView {
    UIView *_dotView;
    UILabel *_label;
}

@property (nonatomic) struct CGSize { double width; double height; } dotSize;
@property (nonatomic) double dotCornerRadius;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;

- (void)updateWithText:(id)a0 color:(id)a1;
- (void).cxx_destruct;

@end
