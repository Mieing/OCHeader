@class NSDictionary, NSArray, NSString;

@interface IESLiveWalletMyCoinDataSource : NSObject <IGListAdapterDataSource>

@property (copy, nonatomic) NSDictionary *trackInfo;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrackInfo:(id)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)updateDataSourceWithItems:(id)a0;
- (void).cxx_destruct;

@end
