@class UILabel, IESECBorderedTagConfiguration;

@interface IESECBorderedTag : UIView {
    UILabel *_label;
}

@property (retain, nonatomic) IESECBorderedTagConfiguration *configuration;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setupSubviews;

@end
