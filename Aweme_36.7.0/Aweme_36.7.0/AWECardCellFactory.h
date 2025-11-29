@interface AWECardCellFactory : NSObject

+ (id)cellClassArray;

- (void)registerForCollectionView:(id)a0;
- (id)cellForCollectionView:(id)a0 model:(id)a1 indexPath:(id)a2 context:(id)a3 selectedB:(id /* block */)a4;

@end
