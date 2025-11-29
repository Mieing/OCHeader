@class NSMutableArray;

@interface WCFinderEditComposeReportInfo : NSObject

@property (nonatomic, getter=isSkipVideoCompose) BOOL skipVideoCompose;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long audioTrackType;
@property (nonatomic) BOOL useVideoCompositionLib;
@property (nonatomic) unsigned long long retryType;
@property (nonatomic) unsigned long long applicationResignActiveTimes;
@property (nonatomic) unsigned long long applicationSuspendTimes;
@property (nonatomic) BOOL keepsProcessInBackground;
@property (nonatomic) unsigned long long autoRetryExportTimes;
@property (retain, nonatomic) NSMutableArray *audioSessionStatus;

- (void)setupWithVideoCompositionAttr:(id)a0 videoEncodeTask:(id)a1;
- (void).cxx_destruct;

@end
