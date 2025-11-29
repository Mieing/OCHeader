@class GPBInt64ObjectDictionary, NSString, IESLiveMultiRtcInfo, IESLiveClientUIInfo, GPBEnumArray, NSMutableArray, IESLiveMultiLiveCoreInfo;

@interface IESLiveChangePlayModeData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (retain, nonatomic) GPBEnumArray *playModesArray;
@property (readonly, nonatomic) unsigned long long playModesArray_Count;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
