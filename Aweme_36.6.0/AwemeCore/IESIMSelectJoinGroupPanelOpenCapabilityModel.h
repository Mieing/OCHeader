@class NSString, NSNumber;

@interface IESIMSelectJoinGroupPanelOpenCapabilityModel : IESIMGroupOpenCapabilityModel

@property (copy, nonatomic) NSString *conversationIds;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) NSNumber *sourceType;
@property (retain, nonatomic) NSNumber *secretType;
@property (retain, nonatomic) NSString *addParticipantsExt;
@property (nonatomic) long long requestSource;

+ (id)optionalPropertyNameSet;

- (void).cxx_destruct;

@end
