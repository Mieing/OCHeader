@class NSString, AWETaskModel, NSArray;

@interface APCDTOMission : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWETaskModel *missionTask;
@property (copy, nonatomic) NSString *missionId;
@property (copy, nonatomic) NSString *missionType;
@property (copy, nonatomic) NSString *missionName;
@property (copy, nonatomic) NSArray *challengeNames;
@property (copy, nonatomic) NSArray *mentionedUsers;
@property (copy, nonatomic) NSString *missionExtraJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mentionedUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (id)generateMissionModel;
- (void).cxx_destruct;

@end
