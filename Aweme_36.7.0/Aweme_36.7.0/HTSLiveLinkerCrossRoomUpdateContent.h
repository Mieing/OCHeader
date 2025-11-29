@class IESLiveClientUIInfo, NSMutableDictionary, NSMutableArray, GPBInt64ObjectDictionary;

@interface HTSLiveLinkerCrossRoomUpdateContent : IESLivePBBaseMessage

@property (nonatomic) long long fromRoomId;
@property (nonatomic) long long toRoomId;
@property (retain, nonatomic) NSMutableDictionary *updateInfo;
@property (readonly, nonatomic) unsigned long long updateInfo_Count;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
