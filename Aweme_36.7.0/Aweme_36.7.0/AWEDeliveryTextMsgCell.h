@class AWEDeliveryTextComponent, AWEDeliveryTextMsgModel;

@interface AWEDeliveryTextMsgCell : AWEDeliveryBaseUserMsgCell

@property (retain, nonatomic) AWEDeliveryTextComponent *textComponent;
@property (retain, nonatomic) AWEDeliveryTextMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (id)popMenuItems:(BOOL)a0;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
