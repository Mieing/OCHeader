@class NSMutableDictionary, NSString, POIMediaListPageContext, UIViewController;
@protocol POIMediaListViewControllerProtocol;

@interface POIMediaListMonitor : NSObject <POIMediaListExtensionLifeCycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (nonatomic) BOOL hasRecordFirstReady;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)playFailedWithError:(id)a0 mediaModel:(id)a1;
- (void)playerDidChangeStallState:(long long)a0 actionType:(long long)a1 reason:(unsigned long long)a2 mediaModel:(id)a3;
- (void)playerWillPlayFirstFrame:(id)a0;
- (void)addTrackExtraParams:(id)a0;
- (void).cxx_destruct;

@end
