@class AWEECOMIMVideoMsgModel, AWEECOMIMVideoComponent;

@interface AWEECOMIMVideoMsgCell : AWEECOMIMBaseUserMsgCell

@property (retain, nonatomic) AWEECOMIMVideoComponent *videoComponentView;
@property (retain, nonatomic) AWEECOMIMVideoMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)recheckMessageStatus;
- (id)originalPopMenuItems;
- (BOOL)canShowMenuItemForward;
- (void)updateSubviewLayouts;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
