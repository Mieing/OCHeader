@class NSString, UIImage, AWEURLModel;

@interface AWEIMRefreshImageViewPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) AWEURLModel *imageUrlModel;
@property (copy, nonatomic) id /* block */ setImageURICompletionBlock;
@property (copy, nonatomic) id /* block */ setImageURLCompletionBlock;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) UIImage *placeholderImage;

- (void).cxx_destruct;

@end
