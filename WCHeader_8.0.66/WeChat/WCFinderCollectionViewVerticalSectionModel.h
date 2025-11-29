@class NSArray, NSString;

@interface WCFinderCollectionViewVerticalSectionModel : NSObject <WCFinderCollectionViewSectionModelProtocol>

@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithItem:(id)a0;
+ (id)modelWithItems:(id)a0;

- (id)itemsHeightWithLayoutEnvironment:(id)a0;
- (id)itemsHeightWithLayoutEnvironment:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
