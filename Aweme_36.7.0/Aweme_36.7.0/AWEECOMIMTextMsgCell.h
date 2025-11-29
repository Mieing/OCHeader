@class AWEECOMIMTextComponent, AWEECOMIMMsgReferenceView, AWEECOMIMTextMsgModel;

@interface AWEECOMIMTextMsgCell : AWEECOMIMBaseUserMsgCell

@property (retain, nonatomic) AWEECOMIMTextComponent *textComponent;
@property (retain, nonatomic) AWEECOMIMMsgReferenceView *referenceView;
@property (nonatomic) BOOL isSelectedAllForPopMenu;
@property (retain, nonatomic) AWEECOMIMTextMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (BOOL)canAddLongGesture;
- (id)originalPopMenuItems;
- (BOOL)canShowMenuItemForward;
- (void)trackCellMsgReferenceDisplay;
- (BOOL)canBaseUserMsgAddLongPress;
- (void)trackCellMsgReferenceClick;
- (id)generateMsgReferenceClickParamsModel;
- (id)generateMsgReferenceDisplayParamsModel;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
