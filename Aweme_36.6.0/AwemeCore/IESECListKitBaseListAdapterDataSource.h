@class NSString, IESECListKitBFFViewController;
@protocol IESECListKitBaseListViewControllerDataSource;

@interface IESECListKitBaseListAdapterDataSource : NSObject <IGListAdapterDataSource>

@property (weak, nonatomic) IESECListKitBFFViewController *viewController;
@property (weak, nonatomic) id<IESECListKitBaseListViewControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceWithViewController:(id)a0;

- (id)sectionControllerForSectionViewModelClass:(Class)a0 sectionControllerClassArray:(id)a1;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void).cxx_destruct;

@end
