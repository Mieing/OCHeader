@class EcsKFCardMessageViewModel;

@interface EcsKFCardMessageCellView : CommonMessageCellView

@property (readonly, nonatomic) EcsKFCardMessageViewModel *viewModel;

- (BOOL)canBeReused;
- (void)layoutInternal;
- (void)layoutContentView;
- (void)longPress:(id)a0;
- (double)getCellViewInfo;
- (id)operationMenuItems;
- (BOOL)canShowMoreMenuItem;

@end
