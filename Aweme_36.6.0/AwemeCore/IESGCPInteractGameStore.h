@class NSNumber, NSString, IESGCPInteractGameAPI;

@interface IESGCPInteractGameStore : NSObject <IESGCPDIContextSubscriber, IESGCPInteractGameRouter, IESGCPGameMetaDataActions>

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) IESGCPInteractGameAPI *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isInAnchorAudiencePlayTogether;
@property (readonly, copy, nonatomic) NSString *gameStatusTrackString;

- (void)didSetGameCPDIContext;
- (id)initWithRoomID:(id)a0 anchorID:(id)a1;
- (void)preloadInteractGameWithSchema:(id)a0;
- (void)closeInteractGameWithSchema:(id)a0;
- (void)openInteractGameWithSchema:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)recordAnchorAudiencePlayTogether:(BOOL)a0;
- (void)gameMetaDataDidUpdate;
- (id)interactGameMetaDataModel;
- (void)_preloadInteractGameIfNeededWithGameMetaData:(id)a0;
- (void)_recordOpenInteractGameWithGameId:(id)a0 roomId:(id)a1 anchorId:(id)a2;
- (void)_trueOpenInteractGameWithSchema:(id)a0 params:(id)a1;
- (BOOL)_liveRoomContainsInteractGame;
- (void).cxx_destruct;

@end
