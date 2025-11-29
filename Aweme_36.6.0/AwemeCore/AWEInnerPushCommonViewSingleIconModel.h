@class UIImage, NSURL;

@interface AWEInnerPushCommonViewSingleIconModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageUrl;
@property (copy, nonatomic) id /* block */ tapActionButtonBlock;

- (void).cxx_destruct;

@end
