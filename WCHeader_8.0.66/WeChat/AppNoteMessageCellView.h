@class AppNoteMessageViewModel;

@interface AppNoteMessageCellView : AppStandardTextContentMessageCellView

@property (readonly, nonatomic) AppNoteMessageViewModel *viewModel;

- (id)contentImgViewsInSize:(struct CGSize { double x0; double x1; })a0 limit:(unsigned long long)a1;
- (id)getDisplayImgDatas:(id)a0;
- (id)operationMenuItems;
- (void)onTouchUpInside;

@end
