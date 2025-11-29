@class NSString, NSArray;

@interface AWETeenSearchSugWordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *word;
@property (nonatomic) long long icon;
@property (nonatomic) long long wordSource;
@property (retain, nonatomic) NSArray *mathchArr;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
