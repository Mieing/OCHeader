@class NSString, UIImage;

@interface BDUGLuckyTabConf : BDUGLuckyBDModel

@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *iconContent;
@property (copy, nonatomic) NSString *iconSize;

+ (id)modelCustomPropertyMapper;

- (id)hashString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
