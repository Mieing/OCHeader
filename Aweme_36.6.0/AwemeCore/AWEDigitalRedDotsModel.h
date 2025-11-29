@class NSString;

@interface AWEDigitalRedDotsModel : AWEBaseApiModel

@property (nonatomic) BOOL guardian;
@property (copy, nonatomic) NSString *guardianText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
