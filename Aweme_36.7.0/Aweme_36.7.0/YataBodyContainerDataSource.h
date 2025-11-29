@class NSString, UICollectionView, YataBodySectionViewModel, YataContainerViewSource, NSMutableArray;
@protocol YataInstanceInnerInterface;

@interface YataBodyContainerDataSource : NSObject <IGListAdapterDataSource>

@property (retain, nonatomic) YataBodySectionViewModel *bodySectionViewModel;
@property (retain, nonatomic) NSMutableArray *viewModelObjects;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) YataContainerViewSource *viewSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerSectionViewModels:(id)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (id)initWithYataInstance:(id)a0;
- (void)setupDataSourceWithViewHolder:(id)a0 seqKeyArray:(id)a1 animationIntermediateSeqKeyArray:(id)a2 animationChangingSeqKeyArray:(id)a3;
- (void)clearBodyDataSource;
- (void).cxx_destruct;

@end
