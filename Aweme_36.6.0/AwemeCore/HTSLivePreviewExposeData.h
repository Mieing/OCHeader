@class HTSLiveClientComponent, IOSClientComponent, HTSLivePreviewExposeData_PreviewSwitch, HTSLivePreviewExposeData_GrowthTask, HTSLivePreviewExposeData_FeedLiveIdeaGuide, HTSLivePreviewExposeData_RevenueData, HTSLivePreviewExposeData_PreviewButtonData, HTSLivePreviewExposeData_PreviewIMExtend, NSMutableArray, HTSLivePreviewExposeData_PreviewPromotion, NSString, HTSLivePreviewExposeData_PreviewGuide, HTSLivePreviewExposeData_PreviewExitGuide, HTSLivePreviewExposeData_PreviewPromotionSyncData, HTSLivePreviewExposeData_FeedPromoteLiveAnchorPoint, HTSLivePreviewExposeData_PreviewExtendArea, HTSLiveEnterPublicAreaAnimation, HTSLivePreviewExposeData_PortraitData;

@interface HTSLivePreviewExposeData : IESLivePBBaseMessage

@property (nonatomic) int style;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewGuide *previewGuide;
@property (nonatomic) BOOL hasPreviewGuide;
@property (retain, nonatomic) NSMutableArray *metasArray;
@property (readonly, nonatomic) unsigned long long metasArray_Count;
@property (retain, nonatomic) NSMutableArray *chatMsgsArray;
@property (readonly, nonatomic) unsigned long long chatMsgsArray_Count;
@property (retain, nonatomic) NSMutableArray *forceInsertionArray;
@property (readonly, nonatomic) unsigned long long forceInsertionArray_Count;
@property (nonatomic) int scrollAfterMs;
@property (nonatomic) BOOL needRealtime;
@property (nonatomic) int messageScrollAfterMs;
@property (nonatomic) int messageScrollIntervalMs;
@property (copy, nonatomic) NSString *previewIntro;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewExtendArea *previewExtendArea;
@property (nonatomic) BOOL hasPreviewExtendArea;
@property (nonatomic) int showUvPv;
@property (nonatomic) int showNameAbbreviation;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewSwitch *switch_p;
@property (nonatomic) BOOL hasSwitch_p;
@property (nonatomic) int isPreviewUseWebsocket;
@property (nonatomic) BOOL isAwemeVideoFeed;
@property (nonatomic) BOOL showPreviewCards;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewPromotion *previewPromotion;
@property (nonatomic) BOOL hasPreviewPromotion;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewIMExtend *previewImExtend;
@property (nonatomic) BOOL hasPreviewImExtend;
@property (retain, nonatomic) NSMutableArray *etDataArray;
@property (readonly, nonatomic) unsigned long long etDataArray_Count;
@property (nonatomic) int aliveChecker;
@property (retain, nonatomic) HTSLiveEnterPublicAreaAnimation *enterPublicAreaAnimation;
@property (nonatomic) BOOL hasEnterPublicAreaAnimation;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewPromotionSyncData *previewPromotionSyncData;
@property (nonatomic) BOOL hasPreviewPromotionSyncData;
@property (retain, nonatomic) HTSLivePreviewExposeData_GrowthTask *growthTask;
@property (nonatomic) BOOL hasGrowthTask;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewExitGuide *previewExitGuide;
@property (nonatomic) BOOL hasPreviewExitGuide;
@property (retain, nonatomic) NSMutableArray *previewExitGuideListArray;
@property (readonly, nonatomic) unsigned long long previewExitGuideListArray_Count;
@property (retain, nonatomic) HTSLiveClientComponent *clientComponent;
@property (nonatomic) BOOL hasClientComponent;
@property (retain, nonatomic) IOSClientComponent *iosClientComponent;
@property (nonatomic) BOOL hasIosClientComponent;
@property (retain, nonatomic) NSMutableArray *chatGroupExtendDataArray;
@property (readonly, nonatomic) unsigned long long chatGroupExtendDataArray_Count;
@property (retain, nonatomic) HTSLivePreviewExposeData_FeedLiveIdeaGuide *feedLiveIdeaGuide;
@property (nonatomic) BOOL hasFeedLiveIdeaGuide;
@property (retain, nonatomic) HTSLivePreviewExposeData_RevenueData *revenueData;
@property (nonatomic) BOOL hasRevenueData;
@property (retain, nonatomic) HTSLivePreviewExposeData_PortraitData *portraitData;
@property (nonatomic) BOOL hasPortraitData;
@property (retain, nonatomic) HTSLivePreviewExposeData_FeedPromoteLiveAnchorPoint *feedPromoteLiveAnchorPoint;
@property (nonatomic) BOOL hasFeedPromoteLiveAnchorPoint;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewButtonData *previewButton;
@property (nonatomic) BOOL hasPreviewButton;
@property (nonatomic) BOOL showSimilarFeedButton;

+ (id)descriptor;

@end
