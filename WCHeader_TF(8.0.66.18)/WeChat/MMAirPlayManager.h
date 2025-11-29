@class NSString, NSMutableDictionary;

@interface MMAirPlayManager : MMUserService <WCAirPlayCenterExt, MMServiceProtocol> {
    NSMutableDictionary *_mutedToastRecords;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)canShowMutedToastForScene:(long long)a0;
- (BOOL)showMutedToastForScene:(long long)a0;
- (void)resetMutedToastRecordsForScene:(long long)a0;
- (void)resetMutedToastRecordsForAllScenes;
- (void)airPlayCenter:(id)a0 routeDidChange:(id)a1;
- (void).cxx_destruct;

@end
