@class NSSet;
@protocol IESLLWaterFallCollectionItemDisplayProtocol;

@interface IESLLWaterFallCollectionItemDisplayManager : NSObject

@property (retain, nonatomic) NSSet *fullDisplayItemList;
@property (weak, nonatomic) id<IESLLWaterFallCollectionItemDisplayProtocol> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)collectionViewDidScroll:(id)a0;

@end
