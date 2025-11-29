@class NSString, NSDictionary;

@interface AWESearchCachalotCardViewHomePageNewUserGuideQueryModel : MTLModel

@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *wordFrom;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long position;

+ (double)calculateCardHeight:(id)a0;

- (void).cxx_destruct;

@end
