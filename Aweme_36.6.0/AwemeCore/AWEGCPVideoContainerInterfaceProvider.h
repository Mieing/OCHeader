@class NSString, NSMutableDictionary;

@interface AWEGCPVideoContainerInterfaceProvider : NSObject <AWEGCPVideoContainerInterface>

@property (retain, nonatomic) NSMutableDictionary *containerContextMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)destroyVideoContainerWithAwemeModel:(id)a0;
- (BOOL)createVideoContainerWithAwemeModel:(id)a0 panelController:(id)a1 interactionController:(id)a2 feedCellController:(id)a3 halfPanelController:(id)a4;
- (void)updateVideoContainerWithAwemeModel:(id)a0 panelController:(id)a1 interactionController:(id)a2 feedCellController:(id)a3 halfPanelController:(id)a4;
- (void)beforeResetVideoContainerWithAwemeModel:(id)a0;
- (void)updatePlayTime:(double)a0 totalTime:(double)a1 withAwemeModel:(id)a2;
- (void)currentPlayVideoDidChangePlayState:(long long)a0 withAwemeModel:(id)a1;
- (id)containerDiContextWithWithAwemeModel:(id)a0;
- (id)keyWithAwemeModel:(id)a0;
- (id)videoContainerWithAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
