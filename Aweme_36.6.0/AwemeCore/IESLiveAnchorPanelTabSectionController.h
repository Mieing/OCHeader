@class NSString, IESLiveAnchorStatusCenterTabModel;

@interface IESLiveAnchorPanelTabSectionController : IGListSectionController <IGListDisplayDelegate, IGListDiffable>

@property (retain, nonatomic) IESLiveAnchorStatusCenterTabModel *tabModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (id)initWithTabModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
