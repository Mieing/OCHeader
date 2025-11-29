@class NSString;

@interface AWEMusicPlaylistService : HTSService <AWEMusicPlaylistService>

@property (nonatomic) BOOL isPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPlaylistDetailOfID:(id)a0 secUserID:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (void)showPlaylistDetailOfID:(id)a0 secUserID:(id)a1 trackParams:(id)a2 extraInfo:(id)a3 completion:(id /* block */)a4;
- (void)showPlaylistDetailOfID:(id)a0 secUserID:(id)a1 trackParams:(id)a2 currentInteractionViewController:(id)a3 extraInfo:(id)a4 completion:(id /* block */)a5;

@end
