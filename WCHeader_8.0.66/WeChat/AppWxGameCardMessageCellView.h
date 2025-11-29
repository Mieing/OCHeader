@class AppWxGameCardMessageViewModel, UIView;

@interface AppWxGameCardMessageCellView : BaseMessageCellView {
    UIView *m_sclView;
}

@property (readonly, nonatomic) AppWxGameCardMessageViewModel *viewModel;

- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)onAppear;
- (void)onLongTouch;
- (void)showMsgPopupMenu;
- (double)getCellViewInfo;
- (id)operationMenuItems;
- (void).cxx_destruct;

@end
