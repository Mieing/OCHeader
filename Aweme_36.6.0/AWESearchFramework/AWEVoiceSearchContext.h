@class NSString, NSDictionary;

@interface AWEVoiceSearchContext : NSObject

@property (nonatomic) long long pageType;
@property (nonatomic) long long positionType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groudID;
@property (copy, nonatomic) NSDictionary *historyConfig;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) long long enterType;

- (void).cxx_destruct;
- (id)init;

@end
