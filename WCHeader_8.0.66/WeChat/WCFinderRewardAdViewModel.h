@class NSData, NSString, WCFinderDataItem, WCFinderPushFeedViewParams, WCFinderBaseCgi, WCFinderShareListReportModel, NSMutableSet, NSMutableArray;
@protocol WCFinderRewardAdViewModelDelegate;

@interface WCFinderRewardAdViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *dataItems;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (copy, nonatomic) NSString *encrytedObjectidTid;
@property (retain, nonatomic) WCFinderDataItem *decipherdDataItem;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSString *lastTid;
@property (retain, nonatomic) NSString *lastNonceID;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSMutableSet *showlikeInduceContentTidSet;
@property (nonatomic) unsigned long long requestScene;
@property (retain, nonatomic) WCFinderBaseCgi *getRelatedCgi;
@property (nonatomic) BOOL continueFlag;
@property (weak, nonatomic) id<WCFinderRewardAdViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderShareListReportModel *reportModel;
@property (retain, nonatomic) WCFinderPushFeedViewParams *funcParams;
@property (readonly, nonatomic) BOOL isSourceValid;

- (id)initWithEncrytedObjectidTid:(id)a0 nonceID:(id)a1 dataScene:(id)a2 commentScene:(int)a3 requestScene:(unsigned long long)a4;
- (void)addContentVM:(id)a0;
- (id)transformDataItems:(id)a0;
- (void)requestData;
- (BOOL)isEnableFetchNextpage;
- (void)requestRelatedList;
- (void)appendFinderContentVM:(id)a0;
- (long long)contentIndexOfTid:(id)a0;
- (id)contentVMWithIndex:(unsigned long long)a0;
- (id)contentVMWithTid:(id)a0;
- (id)contentMediaIndexPathWithTid:(id)a0;
- (void)realRemoveContentVMFromDataSource:(id)a0;
- (void)onFinderDataItemMediaURLIsExpired:(id)a0;
- (int)feedViewControllerScene;
- (void)adReportClickActionType:(long long)a0 adReportScene:(long long)a1 curFeedTid:(id)a2 ignoreFeedIdMatching:(BOOL)a3 hitPoint:(struct CGPoint { double x0; double x1; })a4;
- (void)triggerAdRelatedFeedbackWithActionType:(long long)a0;
- (void).cxx_destruct;

@end
