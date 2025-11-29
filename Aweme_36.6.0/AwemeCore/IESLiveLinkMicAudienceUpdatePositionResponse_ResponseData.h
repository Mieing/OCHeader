@class IESLiveClientUIInfo, NSMutableArray, GPBInt64ObjectDictionary;

@interface IESLiveLinkMicAudienceUpdatePositionResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (retain, nonatomic) NSMutableArray *lockedPositionsArray;
@property (readonly, nonatomic) unsigned long long lockedPositionsArray_Count;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
