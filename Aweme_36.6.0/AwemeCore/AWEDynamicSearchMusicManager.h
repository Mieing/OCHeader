@class NSString, AWEASMusicHistorySuggestionManager;
@protocol AWEDynamicSearchMusicManagerDelegate;

@interface AWEDynamicSearchMusicManager : NSObject <AWEDynamicSearchMusicManagerProtocol>

@property (retain, nonatomic) AWEASMusicHistorySuggestionManager *dataManager;
@property (weak, nonatomic) id<AWEDynamicSearchMusicManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)sendReloadEventWithParams:(id)a0;
- (void)sendStopMusicEventWithParams:(id)a0;
- (void)saveHistory:(id)a0 withEnterMethod:(id)a1 needNotifyReload:(BOOL)a2;
- (void)fetchAllHistoryWithCompletion:(id /* block */)a0;
- (void)deleteHistory:(id)a0 withEnterMethod:(id)a1 needNotifyReload:(BOOL)a2;
- (void)deleteAllHistoryWithEnterMethod:(id)a0 needNotifyReload:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
