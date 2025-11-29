@class NSMutableArray;

@interface IESECShopClickedGoodsIDQueue : NSObject {
    NSMutableArray *_queue;
    long long _maxCapacity;
}

- (void)addGoodsID:(id)a0;
- (id)clickedGoodsID;
- (void).cxx_destruct;
- (id)init;

@end
