@class HTSLiveAppointmentData, HTSLiveStreamRecognitionContainers, HTSLiveWindmillData, NSMutableArray, NSString, HTSLiveVrInfo, HTSLiveWebLivePortOptimization, HTSLiveWebEnterBenefitPointData, HTSLiveLiveMatrixInfo, HTSLiveEnterGiftAnimation, HTSLiveWebSkinData, HTSLiveDecotationDetail, HTSLiveCloudCollaborateData, HTSLiveGroupLiveData, HTSLivePaidLiveSubscribe, HTSLiveGiftPanelTopperTray, HTSLiveAnchorBottomToolBar, HTSLiveWebData, HTSLiveAnchorTogetherLive, HTSLiveWebProgramme, HTSLiveMorePanelData;

@interface HTSLiveRoomOthersData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveDecotationDetail *decoDetail;
@property (nonatomic) BOOL hasDecoDetail;
@property (retain, nonatomic) HTSLiveMorePanelData *morePanelInfo;
@property (nonatomic) BOOL hasMorePanelInfo;
@property (retain, nonatomic) HTSLiveAppointmentData *appointmentInfo;
@property (nonatomic) BOOL hasAppointmentInfo;
@property (retain, nonatomic) HTSLiveWebSkinData *webSkin;
@property (nonatomic) BOOL hasWebSkin;
@property (retain, nonatomic) HTSLiveWebProgramme *programme;
@property (nonatomic) BOOL hasProgramme;
@property (retain, nonatomic) HTSLiveLiveMatrixInfo *liveMatrixInfo;
@property (nonatomic) BOOL hasLiveMatrixInfo;
@property (retain, nonatomic) HTSLiveWebLivePortOptimization *webLivePortOptimization;
@property (nonatomic) BOOL hasWebLivePortOptimization;
@property (retain, nonatomic) HTSLiveGiftPanelTopperTray *giftPanelTopperTray;
@property (nonatomic) BOOL hasGiftPanelTopperTray;
@property (retain, nonatomic) HTSLiveEnterGiftAnimation *enterGiftAnimation;
@property (nonatomic) BOOL hasEnterGiftAnimation;
@property (retain, nonatomic) HTSLivePaidLiveSubscribe *paidLiveSubscribe;
@property (nonatomic) BOOL hasPaidLiveSubscribe;
@property (retain, nonatomic) HTSLiveGroupLiveData *groupLiveData;
@property (nonatomic) BOOL hasGroupLiveData;
@property (nonatomic) long long lvideoItemId;
@property (retain, nonatomic) HTSLiveWebEnterBenefitPointData *webEnterBenefitPointData;
@property (nonatomic) BOOL hasWebEnterBenefitPointData;
@property (retain, nonatomic) HTSLiveStreamRecognitionContainers *recognitionContainers;
@property (nonatomic) BOOL hasRecognitionContainers;
@property (retain, nonatomic) HTSLiveAnchorBottomToolBar *anchorBottomToolBar;
@property (nonatomic) BOOL hasAnchorBottomToolBar;
@property (retain, nonatomic) HTSLiveAnchorTogetherLive *anchorTogetherLive;
@property (nonatomic) BOOL hasAnchorTogetherLive;
@property (nonatomic) long long mosaicVersion;
@property (retain, nonatomic) HTSLiveWebData *webData;
@property (nonatomic) BOOL hasWebData;
@property (retain, nonatomic) NSMutableArray *metricTrackerDataListArray;
@property (readonly, nonatomic) unsigned long long metricTrackerDataListArray_Count;
@property (retain, nonatomic) HTSLiveVrInfo *vrInfo;
@property (nonatomic) BOOL hasVrInfo;
@property (retain, nonatomic) HTSLiveCloudCollaborateData *cloudCollaborateData;
@property (nonatomic) BOOL hasCloudCollaborateData;
@property (retain, nonatomic) HTSLiveWindmillData *windmillData;
@property (nonatomic) BOOL hasWindmillData;
@property (copy, nonatomic) NSString *roomChatGuideLocaleCity;

+ (id)descriptor;

@end
