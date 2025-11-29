@class UIColor, UIImage, BDBaseTransformer, AWEURLModel;

@interface AWEIMBDImageViewPresenterProps : AWEIMUIViewPresenterProps

@property (nonatomic) long long options;
@property (retain, nonatomic) BDBaseTransformer *transformer;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIColor *placeholderBackColor;
@property (retain, nonatomic) AWEURLModel *urlModel;

- (void).cxx_destruct;

@end
