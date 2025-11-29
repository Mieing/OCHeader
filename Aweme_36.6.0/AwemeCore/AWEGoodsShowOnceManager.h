@class NSMutableSet;

@interface AWEGoodsShowOnceManager : NSObject

@property (retain, nonatomic) NSMutableSet *goods;

- (void)clearWithIdentifier:(id)a0;
- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)visit:(id)a0;

@end
