@class GPBInt64ObjectDictionary;

@interface IESLiveVideoEqualRoomLiveCoreInfo : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *liveCoreInfoMap;
@property (readonly, nonatomic) unsigned long long liveCoreInfoMap_Count;

+ (id)descriptor;

@end
