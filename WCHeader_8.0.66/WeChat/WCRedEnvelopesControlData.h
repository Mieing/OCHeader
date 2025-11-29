@class NSDictionary, WCRedEnvelopesAtomicInfo, CContact, CEmoticonWrap, WCPayRealnameGuideInfo, NSMutableArray, NSString, WCRedEnvelopesGreetingReportObject, WCRedEnvelopesDetailInfo, NSMutableDictionary, NSArray, GetRecommendedCoverResponse, CMessageWrap, GetRedPacketFissionResp, HbEnvelopSource, RedPacketStoryInfo, WCRedEnvelopesReceivedRedEnvelopesInfo, WCRedEnvelopesSendedRedEnvelopesInfo, CoverInfoDetail, WCRedEnvelopesHistoryInfo, WCRedEnvelopesSpringFestivalActivtyEntryInfo, RedPacketPreviewMessage, RedEnvelopesLiteappJumpInfo, GetShowSourceResp, WCRedEnvelopesOperationInfo, UIColor, WCRedEnvelopeQuickSendReportObject, GetDefaultRedpacketResponse;

@interface WCRedEnvelopesControlData : NSObject

@property (retain, nonatomic) NSDictionary *m_dicPrepayRequestOrderInfo;
@property (retain, nonatomic) NSMutableArray *m_arrSelectedSendRedEnvelopesUserList;
@property (retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap;
@property (retain, nonatomic) CContact *m_oSelectContact;
@property (retain, nonatomic) WCRedEnvelopesReceivedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo;
@property (retain, nonatomic) WCRedEnvelopesSendedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo;
@property (retain, nonatomic) NSString *m_nsWCRedEnvelopesBrandMessageNativeUrl;
@property (retain, nonatomic) NSString *m_nsSendID;
@property (retain, nonatomic) NSString *m_nsReceiveID;
@property (retain, nonatomic) NSString *m_nsOpenBundleId;
@property (retain, nonatomic) NSDictionary *m_dicOpenApiParam;
@property (nonatomic) unsigned int h5RecordHBKind;
@property (retain, nonatomic) WCRedEnvelopesDetailInfo *m_oWCRedEnvelopesDetailInfo;
@property (retain, nonatomic) WCRedEnvelopesHistoryInfo *m_oWCRedEnvelopesHistoryInfo;
@property (retain, nonatomic) NSDictionary *m_structDicRedEnvelopesUserInfo;
@property (retain, nonatomic) NSDictionary *m_structDicPrepayOrderInfo;
@property (retain, nonatomic) NSDictionary *m_structDicRedEnvelopesBaseInfo;
@property (retain, nonatomic) NSMutableDictionary *m_structDicRedEnvelopesCompleteInfo;
@property (retain, nonatomic) NSDictionary *m_structDicAfterOpenRedEnvelopesInfo;
@property (retain, nonatomic) WCRedEnvelopesAtomicInfo *m_oWCRedEnvelopesAtomicInfo;
@property (retain, nonatomic) WCRedEnvelopesOperationInfo *m_oWCRedEnvelopesOpTail;
@property (retain, nonatomic) WCPayRealnameGuideInfo *realnameGuideInfo;
@property (retain, nonatomic) NSDictionary *m_structDicEnterpriseRedEnvelopesData;
@property (retain, nonatomic) GetShowSourceResp *showSourceResp;
@property (retain, nonatomic) NSArray *redEnvelopesShowResources;
@property (retain, nonatomic) NSArray *redEnvelopesExpiredResources;
@property (retain, nonatomic) HbEnvelopSource *currentRedEnvelopeShowResource;
@property (retain, nonatomic) CoverInfoDetail *currentCoverInfoDetail;
@property (retain, nonatomic) RedPacketStoryInfo *currentStoryInfo;
@property (retain, nonatomic) GetRedPacketFissionResp *splitRedPacketFissionResp;
@property (nonatomic) unsigned int currentStoryInfoSubtypeId;
@property (retain, nonatomic) NSMutableArray *option_items;
@property (retain, nonatomic) UIColor *redSkinColor;
@property (retain, nonatomic) WCRedEnvelopesGreetingReportObject *m_greetingHbReportObj;
@property (nonatomic) BOOL bHasEmoticonData;
@property (retain, nonatomic) CEmoticonWrap *redEnvDetailEmoticonWrap;
@property (retain, nonatomic) RedPacketPreviewMessage *previewMessage;
@property (nonatomic) unsigned int currentRedEnvelopesDetailScene;
@property (nonatomic) BOOL isFirstEntryDetailView;
@property (nonatomic) BOOL isForeignHB;
@property (retain, nonatomic) CContact *selectedMemberContact;
@property (nonatomic) long long currentLaunchRedEnvMode;
@property (retain, nonatomic) WCRedEnvelopesSpringFestivalActivtyEntryInfo *springFestivalEntryInfo;
@property (retain, nonatomic) NSString *m_nsLiveStreamRedEnvelopesRequestBuffer;
@property (retain, nonatomic) NSString *m_nsLiveStreamId;
@property (retain, nonatomic) NSString *m_nsLiveStreamCustomMessage;
@property (nonatomic) unsigned int m_enLiveStreamRedEnvelopesSenderIdentityType;
@property (retain, nonatomic) WCRedEnvelopeQuickSendReportObject *m_quickSendReportObj;
@property (nonatomic) BOOL isFirstTimeOpenRedEnvelope;
@property (retain, nonatomic) GetDefaultRedpacketResponse *defaultSkinResp;
@property (retain, nonatomic) RedEnvelopesLiteappJumpInfo *packetListLiteappInfo;
@property (retain, nonatomic) RedEnvelopesLiteappJumpInfo *recommend_liteapp_info;
@property (retain, nonatomic) GetRecommendedCoverResponse *recommendedCoverResponse;

- (void).cxx_destruct;

@end
