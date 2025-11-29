@class NSString;

@interface AWECodeGenNearbyCreatorTagElementModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *lightTagImageUrl;
@property (copy, nonatomic) NSString *darkTagImageUrl;
@property (copy, nonatomic) NSString *infoType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
