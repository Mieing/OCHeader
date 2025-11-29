@class NSString;

@interface AWECodeGenCoverConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *bgUrl;
@property (nonatomic) double sizeRate;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
