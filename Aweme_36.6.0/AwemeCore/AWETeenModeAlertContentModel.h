@class NSString, AWETeenModeAlertImageModel, NSArray;

@interface AWETeenModeAlertContentModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) AWETeenModeAlertImageModel *image;
@property (retain, nonatomic) NSArray *links;

+ (id)imageJSONTransformer;
+ (id)linksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithText:(id)a0 andImageURLStr:(id)a1;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;

@end
