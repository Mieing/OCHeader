@class LynxUIComponent;

@interface LynxListViewCellLightLynxUI : LynxListViewCellLight

@property (retain, nonatomic) LynxUIComponent *ui;

- (id)removeLynxUI;
- (void)addLynxUI:(id)a0;
- (void)adjustComponentFrame;
- (void)applyLayoutModel:(id)a0;
- (void).cxx_destruct;

@end
