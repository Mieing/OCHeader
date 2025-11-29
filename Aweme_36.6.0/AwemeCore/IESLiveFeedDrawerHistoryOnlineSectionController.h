@class NSString, IESLiveFeedDrawerHistoryOnlineModel, IESLiveFeedDrawerViewControllerContext;

@interface IESLiveFeedDrawerHistoryOnlineSectionController : IGListSectionController <IGListDisplayDelegate, IESLiveFeedDrawerHistorySectionControllerProtocol>

@property (retain, nonatomic) IESLiveFeedDrawerHistoryOnlineModel *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (copy, nonatomic) id /* block */ deleteHistoryBlock;

- (id)cellForItemAtIndex:(long long)a0;
- (id)commonTrackParams;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (void)trackCellClick;
- (void)trackCellWillShow;
- (void)trackCellDelete;
- (void)trackCellWillShowWithCell:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
