@class AWETaskInfoCardModel, NSString, NSArray, AWETaskAnchorModel, AWETaskButtonModel;

@interface AWETaskLiteModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSArray *examples;
@property (copy, nonatomic) NSArray *challengeIDs;
@property (copy, nonatomic) NSArray *stickerIDs;
@property (copy, nonatomic) NSArray *musicIDs;
@property (copy, nonatomic) NSArray *mvIDs;
@property (copy, nonatomic) NSArray *challengeNames;
@property (copy, nonatomic) NSArray *mentionedUsers;
@property (retain, nonatomic) AWETaskAnchorModel *anchorModel;
@property (copy, nonatomic) NSArray *rawDuetAwemes;
@property (copy, nonatomic) NSArray *rawOptionalConditions;
@property (copy, nonatomic) NSArray *taskElasticLayer;
@property (retain, nonatomic) AWETaskInfoCardModel *taskCardInfo;
@property (retain, nonatomic) AWETaskButtonModel *taskButton;
@property (copy, nonatomic) NSArray *connectMusics;
@property (copy, nonatomic) NSString *missionType;
@property (copy, nonatomic) NSString *missionID;
@property (copy, nonatomic) NSString *missionName;
@property (copy, nonatomic) NSString *stickerText;
@property (copy, nonatomic) NSString *dynamicActivityInfo;
@property (copy, nonatomic) NSString *flashID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectMusicsJSONTransformer;
+ (id)rawDuetAwemesJSONTransformer;
+ (id)examplesJSONTransformer;
+ (id)taskElasticLayerJSONTransformer;
+ (id)mentionedUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
