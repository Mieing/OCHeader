@class AWEECOMIMImageMsgModel, AWEECOMIMImageComponent;

@interface AWEECOMIMImageMsgCell : AWEECOMIMBaseUserMsgCell

@property (retain, nonatomic) AWEECOMIMImageComponent *imageComponentView;
@property (retain, nonatomic) AWEECOMIMImageMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)updateUIWhenMessageStatusDidChanged;
- (void)_updateSubviewsLayout;
- (void)recheckMessageStatus;
- (id)originalPopMenuItems;
- (BOOL)canShowPopMenuItems;
- (BOOL)canShowMenuItemForward;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
