@class NSMutableDictionary, GPBInt64ObjectDictionary;

@interface HTSLiveRoomLinkmicMicDisplayInfo : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (retain, nonatomic) GPBInt64ObjectDictionary *micDressInfo;
@property (readonly, nonatomic) unsigned long long micDressInfo_Count;
@property (retain, nonatomic) NSMutableDictionary *openMicDressInfo;
@property (readonly, nonatomic) unsigned long long openMicDressInfo_Count;

+ (id)descriptor;

@end
