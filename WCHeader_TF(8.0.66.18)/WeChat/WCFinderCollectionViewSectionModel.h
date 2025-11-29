@class NSArray, NSString;

@interface WCFinderCollectionViewSectionModel : NSObject <WCFinderCollectionViewSectionModelProtocol>

@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithItems:(id)a0;

- (void).cxx_destruct;

@end
