@class NSString, IESLiveChorusCDNInfo, IESLiveMultiRtcInfo, IESLiveMultiLiveCoreInfo, GPBInt64ObjectDictionary, GPBEnumArray, NSMutableArray, IESLiveChorusAccompanimentInfo, IESLiveClientUIInfo;

@interface IESLiveLinkMicAudienceSwitchSceneResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (retain, nonatomic) GPBEnumArray *playModesArray;
@property (readonly, nonatomic) unsigned long long playModesArray_Count;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (retain, nonatomic) NSMutableArray *lockedPositionsArray;
@property (readonly, nonatomic) unsigned long long lockedPositionsArray_Count;
@property (nonatomic) long long maxMcNum;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) unsigned long long version;
@property (nonatomic) long long totalApply;
@property (nonatomic) long long totalLinked;
@property (nonatomic) int scene;
@property (nonatomic) int uiLayout;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (copy, nonatomic) NSString *functionType;
@property (retain, nonatomic) IESLiveChorusCDNInfo *chorusCdnInfo;
@property (nonatomic) BOOL hasChorusCdnInfo;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;
@property (retain, nonatomic) IESLiveChorusAccompanimentInfo *chorusAccompanimentInfo;
@property (nonatomic) BOOL hasChorusAccompanimentInfo;

+ (id)descriptor;

@end
