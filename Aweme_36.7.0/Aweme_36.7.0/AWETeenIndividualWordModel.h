@class NSString;

@interface AWETeenIndividualWordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *individualWordType;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) long long wordSource;
@property (nonatomic) long long iconType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
