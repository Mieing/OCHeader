@class WCMomentsPlayerSourceConfigurationContext, WCMomentsPlayerSourceDownloadContext, NSDate;

@interface WCMomentsPlayerSourceSession : NSObject

@property (retain, nonatomic) WCMomentsPlayerSourceConfigurationContext *configurationContext;
@property (retain, nonatomic) WCMomentsPlayerSourceDownloadContext *downloadContextForPreview;
@property (retain, nonatomic) WCMomentsPlayerSourceDownloadContext *downloadContextForFullScreen;
@property (retain, nonatomic) NSDate *sourceSwitchStartTime;
@property (retain, nonatomic) NSDate *sourceSwitchEndTime;
@property (nonatomic) long long enterFullScreenCount;
@property (nonatomic) long long loadingCount;

- (id)downloadContextForFileKey:(id)a0;
- (void)didStartDownloadForFileKey:(id)a0;
- (void)didUpdateDownloadMoovForFileKey:(id)a0 withProgressInfo:(id)a1;
- (void)didStopDownloadForFileKey:(id)a0 taskInfo:(id)a1 isCompleted:(BOOL)a2;
- (void)didStopPreloadForFileKey:(id)a0 progressInfo:(id)a1 isCompleted:(BOOL)a2;
- (void)willStartSwitchingSource;
- (void)didFinishSwitchingSource;
- (void).cxx_destruct;

@end
