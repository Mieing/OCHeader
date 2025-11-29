@class ShareCardMessageViewModel;

@interface ShareCardMessageCellView : AppStandardAccountContentMessageCellView

@property (readonly, nonatomic) ShareCardMessageViewModel *viewModel;

- (BOOL)canBeReused;
- (id)avatarInSize:(struct CGSize { double x0; double x1; })a0;
- (id)operationMenuItems;
- (BOOL)isOpenIMChat;
- (BOOL)isOpenIMKefuChat;
- (void)onForward:(id)a0;
- (void)onTouchUpInside;

@end
