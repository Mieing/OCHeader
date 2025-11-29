@interface ACCPitayaUtils : NSObject

+ (void)registerAppLogRunEventCallback:(id)a0 callback:(id /* block */)a1;
+ (void)removeAppLogRunEventCallback:(id)a0;
+ (void)_runTask:(id)a0 withCallback:(id /* block */)a1;
+ (void)queryAndUpdatePitayaBusiness:(id)a0 completion:(id /* block */)a1;
+ (void)runTask:(id)a0 withCallback:(id /* block */)a1;
+ (void)checkShouldPreloadEditPageMusicPanelListWithCallback:(id /* block */)a0;
+ (id)transferPitayaTrackModelToTrackDictionary:(id)a0;

@end
