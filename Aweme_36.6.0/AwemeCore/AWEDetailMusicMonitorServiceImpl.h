@class AWEMusicFeedRequestPayload, AWEMusicCoverRequestPayload, NSString, AWEAwemeModel, AWEMusicDetailRequestPayload, NSDate, NSMutableSet;

@interface AWEDetailMusicMonitorServiceImpl : NSObject <AWEDetailMusicMonitorService>

@property (nonatomic) BOOL hasTrackedLaunch;
@property (nonatomic) BOOL firstCoverHasRecord;
@property (retain, nonatomic) NSDate *viewControllerInitTime;
@property (retain, nonatomic) NSDate *detailRequestStartTime;
@property (retain, nonatomic) NSDate *detailRequestEndTime;
@property (retain, nonatomic) NSDate *feedRequestStartTime;
@property (retain, nonatomic) NSDate *feedRequestEndTime;
@property (retain, nonatomic) AWEMusicDetailRequestPayload *detailPayload;
@property (retain, nonatomic) AWEMusicFeedRequestPayload *feedPayload;
@property (retain, nonatomic) AWEMusicCoverRequestPayload *firstCoverPayload;
@property (retain, nonatomic) AWEAwemeModel *enterModel;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSMutableSet *hasLoadedAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackLaunchMonitorIfNeeded;
- (void)trackDetailCoverLoad:(id)a0;
- (void)viewController_init;
- (void)detailRequestStart;
- (void)detailRequestEndWith:(id)a0;
- (void)feedRequestStart;
- (void)feedRequestEndWith:(id)a0;
- (void)coverRequestFinish:(id)a0;
- (void)setupEnterFrom:(id)a0;
- (void)setupEnterAweme:(id)a0;
- (void).cxx_destruct;

@end
