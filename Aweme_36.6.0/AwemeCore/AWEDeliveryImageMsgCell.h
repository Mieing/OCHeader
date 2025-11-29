@class AWEDeliveryImageComponent, AWEDeliveryImageMsgModel;

@interface AWEDeliveryImageMsgCell : AWEDeliveryBaseUserMsgCell

@property (retain, nonatomic) AWEDeliveryImageComponent *imageComponentView;
@property (retain, nonatomic) AWEDeliveryImageMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (id)popMenuItems;
- (void)updateUIWhenMessageStatusDidChanged;
- (void)_updateSubviewsLayout;
- (void)recheckMessageStatus;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
