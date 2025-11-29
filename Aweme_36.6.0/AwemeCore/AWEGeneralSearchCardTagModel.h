@class NSNumber, NSString;

@interface AWEGeneralSearchCardTagModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *tagType;
@property (copy, nonatomic) NSString *tagDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
