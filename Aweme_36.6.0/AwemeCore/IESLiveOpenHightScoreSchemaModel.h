@class NSString;

@interface IESLiveOpenHightScoreSchemaModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *queryUserName;
@property (nonatomic) long long queryUserId;
@property (copy, nonatomic) NSString *requestPage;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
