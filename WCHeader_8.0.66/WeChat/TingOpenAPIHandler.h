@interface TingOpenAPIHandler : MMObject

+ (void)openTingViewFromJSAPIWithParam:(id)a0 scene:(int)a1 navigationController:(id)a2 callBack:(id /* block */)a3;
+ (void)openCategoryFromJSAPIWithParam:(id)a0 scene:(int)a1 navigationController:(id)a2 callBack:(id /* block */)a3;
+ (void)openCategoryItemWithCategoryId:(id)a0 scene:(int)a1 navigationController:(id)a2 callBack:(id /* block */)a3;
+ (void)openCategoryItem:(id)a0 scene:(int)a1 navigationController:(id)a2 callBack:(id /* block */)a3;
+ (void)__doOpenCategory:(id)a0 scene:(int)a1 navigationController:(id)a2;
+ (BOOL)__checkCategoryItemValid:(id)a0 errMsg:(id *)a1;
+ (void)playWithCategoryId:(id)a0 scene:(int)a1 callBack:(id /* block */)a2;
+ (BOOL)operateTingItemInCurrentNav:(id)a0 params:(id)a1;
+ (void)showAddAlbumBottomToastInView:(id)a0 scene:(int)a1 WithClickAction:(id /* block */)a2;
+ (void)__handleCategoryEvent:(id)a0 categoryItem:(id)a1 params:(id)a2;
+ (unsigned long long)eventFromEngineEventValue:(unsigned long long)a0;
+ (void)openProfileFromJSAPIWithParam:(id)a0 scene:(int)a1 navigationController:(id)a2 callBack:(id /* block */)a3;
+ (void)finderSleepModeJumpTingWithByPassBuffer:(id)a0 params:(id)a1 callBack:(id /* block */)a2;
+ (void)resetToHomeAndOpenAudioMinePage;
+ (void)finderAudioTestJump;
+ (void)playSimpleMusicInfoBufferAndOpenPlayerPage:(id)a0 contentVM:(id)a1;

@end
