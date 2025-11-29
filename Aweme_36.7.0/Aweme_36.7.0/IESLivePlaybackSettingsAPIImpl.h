@class NSString;

@interface IESLivePlaybackSettingsAPIImpl : NSObject <IESLivePlaybackSettingsAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisibleScopeWithEpisodeID:(id)a0 visibilityRange:(long long)a1 availableUids:(id)a2 blockUids:(id)a3 completion:(id /* block */)a4;
- (void)deletePlaybackWithEpisodeID:(id)a0 completion:(id /* block */)a1;
- (void)checkSaleTicketsStatus:(id)a0 completion:(id /* block */)a1;

@end
