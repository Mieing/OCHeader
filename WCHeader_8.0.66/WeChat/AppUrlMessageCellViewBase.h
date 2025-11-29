@class AppUrlMessageViewModel;

@interface AppUrlMessageCellViewBase : CommonMessageCellView

@property (readonly, nonatomic) AppUrlMessageViewModel *viewModel;

- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)onAppear;
- (BOOL)isAsk;
- (BOOL)isAISearch;
- (BOOL)liteAppForbidFav;
- (void)initSourceViewInside;
- (void)initSourceViewInsideWith:(id)a0 iconImageUrlString:(id)a1 bgColor:(id)a2 extraParams:(id)a3;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)doFavorite;
- (void)onForward:(id)a0;
- (BOOL)canPeek;
- (id)urlForPreView:(id)a0;
- (id)viewControllerForPreview:(id)a0;
- (id)viewControllerToPreviewWithFromController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateView:(id)a2;

@end
