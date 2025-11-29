@class BDPUniqueID, NSMutableDictionary;

@interface BDPPluginGameInterativeButton_HG : BDPBridgeInstancePlugin {
    NSMutableDictionary *_btnStyleDict;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *viewDict;

- (void)switchToButton:(id)a0 inCanvasView:(id)a1 withAnimation:(id)a2;
- (void)onClickInteractiveButton:(id)a0;
- (void)createInteractiveButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateInteractiveButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
