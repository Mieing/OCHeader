@class NSString, UIImage, UIColor;

@interface AWEPublishShareAsStoryCoverModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (retain, nonatomic) UIImage *userIconImage;
@property (retain, nonatomic) UIImage *originVideoCoverImage;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) BOOL isNonPostscript;

- (void).cxx_destruct;

@end
