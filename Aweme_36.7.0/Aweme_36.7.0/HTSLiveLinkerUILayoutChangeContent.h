@class GPBInt64ObjectDictionary, NSString, IESLiveMultiRtcInfo, IESLiveClientUIInfo, IESLiveMultiLiveCoreInfo, NSMutableArray;

@interface HTSLiveLinkerUILayoutChangeContent : IESLivePBBaseMessage

@property (nonatomic) long long uiLayout;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *linkedListUsersArray;
@property (readonly, nonatomic) unsigned long long linkedListUsersArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
