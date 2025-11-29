@class NSString, NSMutableArray;

@interface AWEAwemeDetailOfflineCenterController : AWEAwemeNewDetailBaseController

@property (nonatomic) long long videoFinishCount;
@property (nonatomic) long long videoPlayCount;
@property (retain, nonatomic) NSMutableArray *videoUniquePlayFinishItemArray;
@property (retain, nonatomic) NSMutableArray *videoUniquePlayItemArray;
@property (nonatomic) BOOL hasConfigEnable;
@property (nonatomic) BOOL enableOfflineTrackerUpload;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) NSString *exitMethod;

- (void)onVideoPlayStart:(id)a0;
- (void)recordConsumptionData;
- (void)onVideoPlayEnded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)viewDidDisappear;

@end
