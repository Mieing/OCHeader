@class NSString, NSMutableArray, BDByteScreenCastBackgroundImage;

@interface BDByteScreenCastResultBanner : NSObject

@property (retain, nonatomic) BDByteScreenCastBackgroundImage *backgroundImage;
@property (copy, nonatomic) NSString *recommendText;
@property (copy, nonatomic) NSString *recommendTextColor;
@property (copy, nonatomic) NSString *recommendImage;
@property (retain, nonatomic) NSMutableArray *tags;
@property (copy, nonatomic) NSString *schema;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void)checkTags;
- (void)configWithResult:(unsigned long long)a0;
- (void).cxx_destruct;

@end
