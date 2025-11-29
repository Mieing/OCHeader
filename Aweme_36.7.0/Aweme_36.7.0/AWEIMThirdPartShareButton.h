@class UIView;

@interface AWEIMThirdPartShareButton : UIButton

@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithTitle:(id)a0 actionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
