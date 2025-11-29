@class NSString, NSNumber;

@interface AWEPLVSectionBackgrounColorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *colorHexString;
@property (copy, nonatomic) NSNumber *alpha;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
