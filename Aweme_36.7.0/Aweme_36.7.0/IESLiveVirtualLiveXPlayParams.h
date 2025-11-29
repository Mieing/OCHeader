@class IESLiveVirtualLiveXPlayGameData, IESLiveVirtualLiveXPlayLastVirtualData, IESLiveVirtualLiveXPlayRTCInfo, NSDictionary, NSString;

@interface IESLiveVirtualLiveXPlayParams : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveVirtualLiveXPlayGameData *gameData;
@property (copy, nonatomic) IESLiveVirtualLiveXPlayLastVirtualData *lastVirtualData;
@property (retain, nonatomic) IESLiveVirtualLiveXPlayRTCInfo *appRTCInfo;
@property (copy, nonatomic) NSDictionary *ueRTCInfo;
@property (copy, nonatomic) NSDictionary *forwardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)modelWithDictionary:(id)a0;


@end
