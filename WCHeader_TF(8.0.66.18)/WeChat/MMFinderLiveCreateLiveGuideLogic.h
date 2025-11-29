@class NSString, MMLiveTaskId, LbsLifeData;
@protocol MMFinderLiveCreateLiveGuideLogicDelegate;

@interface MMFinderLiveCreateLiveGuideLogic : NSObject <MMFinderLiveCreateLivePOIGuideViewDataSource>

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (nonatomic) BOOL currentTopicTextValid;
@property (retain, nonatomic) LbsLifeData *lbsLifeData;
@property (nonatomic) BOOL currentLiveHasPOIInfo;
@property (nonatomic) BOOL currentLiveHasTopicInfo;
@property (nonatomic) long long currentCreateLivePageMode;
@property (weak, nonatomic) id<MMFinderLiveCreateLiveGuideLogicDelegate> delegate;
@property (readonly, nonatomic) BOOL needShowCreateLiveGuidePanel;
@property (readonly, nonatomic) NSString *createLivePanelTitle;
@property (readonly, nonatomic) BOOL needShowPOIGuide;
@property (readonly, nonatomic) BOOL needShowTopicGuide;
@property (readonly, nonatomic) BOOL needShowCancelButton;
@property (readonly, nonatomic) BOOL enableStartLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)updateCreateLiveInfoByDelegate;
- (void)updateTopicTextValidState:(BOOL)a0;
- (void)updateLbsLifeData:(id)a0;
- (void)updateOnShowGuidePanel;
- (id)getLiveTask;
- (id)getGuidePageControlInfo;
- (id)getRemiderControlInfoForCurPageMode;
- (id)getPoiPopupFreqencyInfo;
- (id)getPOIGuideViewLbsLifeData;
- (void).cxx_destruct;

@end
