@class NSString, UIImage;

@interface AWESearchBackgroundBGImageModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) UIImage *localImage;
@property (nonatomic) unsigned long long imageLayoutType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
