@class WCDataItem, NSString, NSMutableDictionary, NSMutableSet, WCMicroMerchantFeedsGroup;

@interface WCMicroMerchantReporter : NSObject <IWCTimeLineSessionExt>

@property (retain, nonatomic) NSMutableDictionary *foldExposureInfo;
@property (retain, nonatomic) NSMutableSet *exposureSessionExposureFeedIds;
@property (retain, nonatomic) NSString *exposureSessionID;
@property (retain, nonatomic) NSString *browseSessionID;
@property (nonatomic) unsigned int browseStart;
@property (retain, nonatomic) WCDataItem *browseFoldItem;
@property (retain, nonatomic) WCMicroMerchantFeedsGroup *browseFoldItemWsGroup;
@property (retain, nonatomic) NSMutableSet *browseFeedListInFold;
@property (nonatomic) BOOL hasClickedUnfold;
@property (nonatomic) BOOL hasConfirmedUnfold;
@property (nonatomic) unsigned int wsFoldType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)asyncDoReportExposure:(id)a0 sessionID:(id)a1 exposureSessionExposureFeedIdsCnt:(unsigned int)a2;
+ (unsigned int)getWCMicroMerchantFoldType:(unsigned int)a0;

- (id)init;
- (void)beginExposureSession;
- (void)endExposureSession;
- (void)resetFoldExposure;
- (void)recordFoldItemGenerate:(id)a0 index:(unsigned int)a1;
- (void)updateExposureClicked:(BOOL)a0 forFeedID:(id)a1;
- (void)onTimeLineSessionStat:(id)a0;
- (void)beginBrowseSession:(id)a0 wsGroup:(id)a1;
- (void)endBrowseSession;
- (void)recordExposureFeedIDInBrowseFold:(id)a0;
- (void)recordOnClickUnfoldTimelineButton;
- (void)recordOnComfirmUnfoldTimeline;
- (void)doReportBrowse;
- (void)resetFoldBrowse;
- (void).cxx_destruct;

@end
