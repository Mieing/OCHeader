@class IESLiveClientUIInfo, IESLiveLinkerBaseInfo, NSMutableArray, GPBInt64ObjectDictionary;

@interface HTSLiveRoomLinkMicSyncData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveLinkerBaseInfo *linkerBaseInfo;
@property (nonatomic) BOOL hasLinkerBaseInfo;
@property (retain, nonatomic) NSMutableArray *lockedPositionsArray;
@property (readonly, nonatomic) unsigned long long lockedPositionsArray_Count;
@property (retain, nonatomic) NSMutableArray *positionsArray;
@property (readonly, nonatomic) unsigned long long positionsArray_Count;
@property (nonatomic) long long placeholder;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;
@property (nonatomic) unsigned long long version;

+ (id)descriptor;

@end
