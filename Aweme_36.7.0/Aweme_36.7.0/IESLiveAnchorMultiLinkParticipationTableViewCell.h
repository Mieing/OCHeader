@class IESLiveAnchorMultiLinkParticipationCellItem, IESLivePKNormalPanelViewModel, NSString, IESLivePKRecommendTabView;
@protocol IESLiveAnchorMultiLinkParticipationTableViewDelegate;

@interface IESLiveAnchorMultiLinkParticipationTableViewCell : UITableViewCell <IESLivePKRecommendTabViewDelegate>

@property (retain, nonatomic) IESLiveAnchorMultiLinkParticipationCellItem *item;
@property (retain, nonatomic) IESLivePKRecommendTabView *multiLinkRecommendView;
@property (retain, nonatomic) IESLivePKNormalPanelViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveAnchorMultiLinkParticipationTableViewDelegate> recommendTabViewCellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithViewModel;
- (id)getPanGestureRecognizers;
- (void)didUpdatePanelScrollViewOffset:(id)a0 deltaY:(double)a1;
- (void)willPanelScrollViewBeginDragging;
- (void)willPanelScrollViewEndDragging;
- (void)setupItem:(id)a0 isRefresh:(BOOL)a1;
- (void)didClickedRegisterButtonWithFlexActivityID:(unsigned long long)a0;
- (void)setupSubViews;
- (void).cxx_destruct;

@end
