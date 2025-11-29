@class NSSet;
@protocol AWEWaterFallCollectionItemDisplayProtocol;

@interface AWEWaterFallCollectionItemDisplayManager : NSObject

@property (retain, nonatomic) NSSet *fullDisplayItemList;
@property (weak, nonatomic) id<AWEWaterFallCollectionItemDisplayProtocol> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)collectionViewDidScroll:(id)a0;

@end
