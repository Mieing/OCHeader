@class NSString;

@interface AFDRadarInnerGroupModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *nameSuffix;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
