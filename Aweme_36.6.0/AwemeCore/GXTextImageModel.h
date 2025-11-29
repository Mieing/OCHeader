@class NSString, UIImage;

@interface GXTextImageModel : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long start;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *align;
@property (nonatomic) double offset;
@property (nonatomic) double leftOffset;
@property (nonatomic) double rightOffset;
@property (retain, nonatomic) UIImage *image;

- (void)setupWithDic:(id)a0;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;

@end
