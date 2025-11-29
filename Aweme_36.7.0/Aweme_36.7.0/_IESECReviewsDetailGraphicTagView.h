@class UIImageView, UILabel;

@interface _IESECReviewsDetailGraphicTagView : UIView {
    UIImageView *_iconImageView;
    UILabel *_textLabel;
}

@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long currentIndex;

- (void)updateTextWithCount:(long long)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
