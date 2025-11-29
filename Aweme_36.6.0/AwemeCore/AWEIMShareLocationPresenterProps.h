@class NSString, UIImage, AWEURLModel;

@interface AWEIMShareLocationPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ coverTappedActionBlock;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) UIImage *localImage;
@property (retain, nonatomic) AWEURLModel *coverResourceUrl;

- (void).cxx_destruct;

@end
