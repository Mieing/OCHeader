@class IESLiveClientUIInfo, NSString, IESLiveMultiRtcInfo, IESLiveChorusAccompanimentInfo, GPBEnumArray, IESLiveMultiLiveCoreInfo, IESLiveChorusCDNInfo;

@interface IESLiveLinkMicAudienceInitResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) long long linkmicId;
@property (nonatomic) int vendor;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appSign;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (nonatomic) BOOL supportUpdateLinkType;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (retain, nonatomic) GPBEnumArray *playModesArray;
@property (readonly, nonatomic) unsigned long long playModesArray_Count;
@property (nonatomic) long long maxMcNum;
@property (nonatomic) int scene;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;
@property (nonatomic) int uiLayout;
@property (nonatomic) BOOL isFirstInit;
@property (copy, nonatomic) NSString *functionType;
@property (copy, nonatomic) NSString *linkerSessionId;
@property (copy, nonatomic) NSString *subRtcExtInfo;
@property (retain, nonatomic) IESLiveChorusCDNInfo *chorusCdnInfo;
@property (nonatomic) BOOL hasChorusCdnInfo;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;
@property (retain, nonatomic) IESLiveChorusAccompanimentInfo *chorusAccompanimentInfo;
@property (nonatomic) BOOL hasChorusAccompanimentInfo;

+ (id)descriptor;

@end
