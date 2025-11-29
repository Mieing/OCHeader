@class NSMutableDictionary;

@interface AWESearchCommonChainMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *smartSceneTrackInfo;

+ (id)sharedInstance;

- (void)startMonitorWithSmartTask:(id)a0 BusinessName:(id)a1 channel:(id)a2 scene:(id)a3 searchID:(id)a4 extraData:(id)a5;
- (void)finishMonitorWithSmartTask:(id)a0 WithStatus:(id)a1 data:(id)a2;
- (void)updateInfoWithSmartTask:(id)a0 WithStatus:(id)a1 data:(id)a2;
- (void)trackMonitorWithStatus:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
