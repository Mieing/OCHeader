@class NSString;

@interface AWECodeGenFloatTipsContentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *subDesc;
@property (copy, nonatomic) NSString *img;
@property (copy, nonatomic) NSString *video;
@property (copy, nonatomic) NSString *poster;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
