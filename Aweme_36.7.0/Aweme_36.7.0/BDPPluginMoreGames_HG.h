@class BDPUniqueID, NSMutableDictionary;

@interface BDPPluginMoreGames_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *btnDataDict;
@property (retain, nonatomic) NSMutableDictionary *btnDict;

- (void)_onClickMoreGamesEntry:(id)a0;
- (void)createMoreGamesButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateMoreGamesButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
