@class NSArray, NSString, UIImage;

@interface IESECWinProductsImageLoadConfiguration : NSObject

@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) UIImage *placeholder;
@property (nonatomic) long long contentMode;

- (void).cxx_destruct;
- (id)init;

@end
