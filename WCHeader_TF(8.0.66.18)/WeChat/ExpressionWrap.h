@class NSString, NSDictionary, UIImage;

@interface ExpressionWrap : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *descDic;
@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIImage *image;

- (id)loadImage;
- (void).cxx_destruct;

@end
