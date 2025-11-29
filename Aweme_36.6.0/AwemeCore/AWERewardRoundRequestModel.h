@class NSString, NSDictionary;

@interface AWERewardRoundRequestModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long currentRound;
@property (copy, nonatomic) NSString *ecpmList;
@property (copy, nonatomic) NSString *contextTrace;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterCreatorId;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
