@class NSString, IESLiveMultiLiveCoreInfo, IESLiveMultiRtcInfo, IESLiveLinkMicAudienceInitResponse_ResponseData, IESLiveChorusCDNInfo, NSArray, HTSLiveLinkMicMethod, GPBEnumArray, NSObject, IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData, NSNumber, IESLiveClientUIInfo;

@interface IESLiveLinkmicLinkAudienceCreateContext : IESLiveLinkmicLinkContext <IESLiveLinkmicLinkCreateContext> {
    NSObject *_rawData;
    NSObject *_extraData;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceInitResponse_ResponseData *responseInit;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData *responseResume;
@property (retain, nonatomic) HTSLiveLinkMicMethod *message;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *subRtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (retain, nonatomic) IESLiveChorusCDNInfo *chorusCDNInfo;
@property (nonatomic) unsigned long long startScene;
@property (copy, nonatomic) NSString *functionType;
@property (nonatomic) int uiLayout;
@property (nonatomic) BOOL supportUpdateLinkType;
@property (nonatomic) BOOL isFirstInit;
@property (nonatomic) long long maxMcNum;
@property (copy, nonatomic) GPBEnumArray *playModesArray;
@property (copy, nonatomic) NSArray *playModes;
@property (retain, nonatomic) NSNumber *timeStamp;
@property (copy, nonatomic) NSString *startSource;
@property (nonatomic) int layoutConfigVersion;
@property (readonly, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (readonly, nonatomic) long long uiLayoutRawValue;
@property (readonly, nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly, copy, nonatomic) NSString *linkerSessionId;
@property (readonly, copy, nonatomic) NSString *remoteLinkerSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkMicMethodMessage:(id)a0;
- (id)initWithResumeResponse:(id)a0;
- (BOOL)playModesContain:(int)a0;
- (id)initWithInitResponse:(id)a0;
- (void).cxx_destruct;
- (id)rawData;
- (id)extraData;

@end
