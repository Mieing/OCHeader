@class AWEFeedLiveModuleController, NSTimer, AWEAwemeModel, AWENetworkQuailityManager, NSString, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface AWELiveZeroVVManager : NSObject <AWENetworkQuailityDelegate>

@property (retain, nonatomic) AWENetworkQuailityManager *netManager;
@property (retain, nonatomic) NSMutableArray *modelList;
@property (retain, nonatomic) NSTimer *liveRemoveTimer;
@property (retain, nonatomic) AWEAwemeModel *preAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *nextAwemeModel;
@property (retain, nonatomic) NSMutableDictionary *liveFeatureDic;
@property (retain, nonatomic) NSMutableArray *notDistributeModels;
@property (retain, nonatomic) NSDictionary *pingInfo;
@property (retain, nonatomic) NSTimer *lvvPredictTimer;
@property (weak, nonatomic) AWEFeedLiveModuleController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)liveModuleService;
- (void)unreadWithAwemeModels:(id)a0 genTime:(id)a1;
- (void)predictLvvWithPreModel:(id)a0 nextModel:(id)a1;
- (void)initNetManager;
- (void)handleNetDetectResult:(id)a0;
- (void)pingFor0vv;
- (void)collectFeatureWithPingInfo;
- (void)firstPredict:(long long)a0 model:(id)a1 insertVideoCount:(id)a2;
- (void)deleteLive:(id)a0;
- (void)postLvvNotification:(id)a0;
- (void)networkQualityManger:(id)a0 didChangeQuailty:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_addNotification;

@end
