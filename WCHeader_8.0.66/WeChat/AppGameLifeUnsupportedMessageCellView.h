@class AppGameLifeUnsupportedMessageViewModel;

@interface AppGameLifeUnsupportedMessageCellView : TextMessageCellView

@property (readonly, nonatomic) AppGameLifeUnsupportedMessageViewModel *viewModel;

- (BOOL)canBeReused;
- (void)onWeAppLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)touchIntoSelectCopyState;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;

@end
