@class AWEAwemeModel;
@protocol AWEUGPendantUIProtocol, AWEUGPendantScrollFeedProtocol, AWEUGPendantTaskStatusProtocol;

@interface AWEUGPendantScrollFeedService : NSObject

@property (weak, nonatomic) id<AWEUGPendantTaskStatusProtocol> taskStatusTarget;
@property (nonatomic) long long currentViewCount;
@property (nonatomic) long long countOfDisappear;
@property (weak, nonatomic) id<AWEUGPendantUIProtocol> pendant;
@property (weak, nonatomic) id<AWEUGPendantScrollFeedProtocol> pendantManager;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) BOOL isInProcess;

- (void)setupNotification;
- (void)feedTableViewControllerWillPlayAweme:(id)a0;
- (void)updateWithFeedTableVC:(id)a0;
- (void)bindTaskStatusTarget:(id)a0;
- (void)bindPendant:(id)a0;
- (void)checkIfNeedFold;
- (void)updateCountOfDisappear:(long long)a0;
- (void)bindPendantStatusManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
