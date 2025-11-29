@class NSString;

@interface AWESSUCColorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *lightHexString;
@property (copy, nonatomic) NSString *darkHexString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
