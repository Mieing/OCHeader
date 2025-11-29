@class NSString, NSArray;

@interface AWENearbyPeopleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *showText;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSArray *headImageURL;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
