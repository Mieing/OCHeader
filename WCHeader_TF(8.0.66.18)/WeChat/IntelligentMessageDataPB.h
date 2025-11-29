@class NSString, NSMutableDictionary;

@interface IntelligentMessageDataPB : MMObject <PBCoding>

@property (retain, nonatomic) NSString *lastUpdateModelId;
@property (retain, nonatomic) NSMutableDictionary *modelKeyInfoDic;
@property (retain, nonatomic) NSMutableDictionary *updateModelItemDic;
@property (nonatomic) long long faceClusterSequence;
@property (nonatomic) unsigned int currentIntelligentMsgVersion;
@property (nonatomic) unsigned int strartRepairIntelligentMsgCurrentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastUpdateModelId;
+ (void)PBArrayAdd_modelKeyInfoDic;
+ (void)PBArrayAdd_updateModelItemDic;
+ (void)PBArrayAdd_faceClusterSequence;
+ (void)PBArrayAdd_currentIntelligentMsgVersion;
+ (void)PBArrayAdd_strartRepairIntelligentMsgCurrentVersion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
