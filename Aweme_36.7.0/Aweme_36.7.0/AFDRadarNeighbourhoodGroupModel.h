@class NSString;

@interface AFDRadarNeighbourhoodGroupModel : AWEBaseApiModel

@property (nonatomic) long long conversationId;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *groupIcon;
@property (nonatomic) long long distance;
@property (nonatomic) long long memberCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
