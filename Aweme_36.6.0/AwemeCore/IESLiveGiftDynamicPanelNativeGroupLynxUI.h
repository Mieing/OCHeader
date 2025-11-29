@class IESLiveFantasticGiftGroupSelectionListItem, UIView;

@interface IESLiveGiftDynamicPanelNativeGroupLynxUI : LynxUIView

@property (retain, nonatomic) IESLiveFantasticGiftGroupSelectionListItem *viewModel;
@property (nonatomic) BOOL isLoaded;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *groupView;

- (void)reloadGroupWithDataSharing:(id)a0;
- (id)loadNativeViewWithDatSharing:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (id)createView;

@end
