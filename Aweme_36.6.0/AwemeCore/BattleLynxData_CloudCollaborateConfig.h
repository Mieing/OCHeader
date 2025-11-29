@class BattleCloudCollaborateThroneFightInfo, NSString, NSMutableDictionary, BattleLynxData_CloudCollaborateConfig_Setting, NSMutableArray;

@interface BattleLynxData_CloudCollaborateConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *resourceId;
@property (nonatomic) int confluenceType;
@property (retain, nonatomic) NSMutableDictionary *linkmicIdStrToStream;
@property (readonly, nonatomic) unsigned long long linkmicIdStrToStream_Count;
@property (retain, nonatomic) BattleLynxData_CloudCollaborateConfig_Setting *setting;
@property (nonatomic) BOOL hasSetting;
@property (copy, nonatomic) NSString *rtcKey;
@property (retain, nonatomic) NSMutableDictionary *layoutData;
@property (readonly, nonatomic) unsigned long long layoutData_Count;
@property (copy, nonatomic) NSString *defaultLayoutDataKey;
@property (retain, nonatomic) NSMutableArray *stickerContextsArray;
@property (readonly, nonatomic) unsigned long long stickerContextsArray_Count;
@property (retain, nonatomic) BattleCloudCollaborateThroneFightInfo *throneFightInfo;
@property (nonatomic) BOOL hasThroneFightInfo;
@property (copy, nonatomic) NSString *lokiResourceId;

+ (id)descriptor;

@end
