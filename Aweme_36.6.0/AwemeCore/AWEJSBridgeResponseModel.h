@class NSString, NSNumber, AWETaskModel;

@interface AWEJSBridgeResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *charityID;
@property (copy, nonatomic) NSString *mvId;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *starUID;
@property (copy, nonatomic) NSString *starAtlasOrderID;
@property (retain, nonatomic) NSNumber *channel;
@property (nonatomic) BOOL showStickerPanel;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootEntrance;
@property (copy, nonatomic) NSString *musicSelectFrom;
@property (copy, nonatomic) NSString *avatarDecorationID;
@property (retain, nonatomic) AWETaskModel *mission;
@property (copy, nonatomic) NSString *missionID;
@property (copy, nonatomic) NSString *missionType;
@property (copy, nonatomic) NSString *missionName;
@property (copy, nonatomic) NSString *starAtlasExtra;
@property (nonatomic) BOOL isAssignmentMission;
@property (nonatomic) BOOL hasShoppingCartPermission;
@property (nonatomic) BOOL isShoppingCartOverused;
@property (copy, nonatomic) NSString *dynamicCameraSchema;
@property (copy, nonatomic) NSString *magic3ComponentId;
@property (copy, nonatomic) NSString *magic3Source;
@property (copy, nonatomic) NSString *magic3ActivityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)missionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
