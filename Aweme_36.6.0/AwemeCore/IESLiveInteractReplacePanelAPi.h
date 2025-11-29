@class NSNumber;

@interface IESLiveInteractReplacePanelAPi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomId;

- (void)pingType:(id)a0;
- (void)getListWithGuestId:(id)a0 completion:(id /* block */)a1;
- (void)pingDuringSelecting;
- (void)pingAfterClosePanel;
- (void)adjustSeat:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
