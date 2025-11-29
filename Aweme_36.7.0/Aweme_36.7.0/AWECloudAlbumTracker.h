@class EcClient, NSMutableDictionary, NSString;

@interface AWECloudAlbumTracker : NSObject <EcTaskChangeProtocol>

@property (weak, nonatomic) EcClient *client;
@property (retain, nonatomic) NSMutableDictionary *downloadTrackerRunningStart;
@property (retain, nonatomic) NSMutableDictionary *downloadTrackerPauseStart;
@property (retain, nonatomic) NSMutableDictionary *downloadTrackerPauseDuration;
@property (retain, nonatomic) NSMutableDictionary *downloadTrackerPauseDidRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskItemChanges:(id)a0;
- (void)taskProgressChanges:(id)a0;
- (void)taskStateChanges:(id)a0;
- (void)trackerUploadChanges:(id)a0;
- (void)trackerDownloadChanges:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (void)updateClient:(id)a0;

@end
