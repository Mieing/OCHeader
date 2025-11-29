@class NSString, NSDictionary;

@interface AWESearchLifeCommonPatchModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *dataID;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
