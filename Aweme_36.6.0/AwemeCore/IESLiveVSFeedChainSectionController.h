@class NSString, IESLiveVSFeedChainCellModel;
@protocol IESLiveVSFeedChainSectionDelegate;

@interface IESLiveVSFeedChainSectionController : IGListSectionController <IGListSupplementaryViewSource, IGListDisplayDelegate>

@property (retain, nonatomic) IESLiveVSFeedChainCellModel *cellModel;
@property (nonatomic) BOOL needShowNoMoreView;
@property (weak, nonatomic) id<IESLiveVSFeedChainSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (id)supplementaryViewSource;
- (void)updateNeedShowNoMoreView:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;
- (id)displayDelegate;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
