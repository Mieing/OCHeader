@class NSString;

@interface IESLiveGameCPInteractGameServiceImpl : NSObject <IESGCPLiveInteractGameService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadInteractGameWithSchema:(id)a0;
- (void)openInteractGameWithSchema:(id)a0 params:(id)a1;
- (void)closeInteractGameWithSchema:(id)a0;
- (void)closeInteractGames;
- (BOOL)isInteractGameInRunningWithSchema:(id)a0;

@end
