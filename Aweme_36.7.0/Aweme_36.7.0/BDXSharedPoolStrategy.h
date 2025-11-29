@class NSArray, NSNumber;

@interface BDXSharedPoolStrategy : NSObject

@property (copy, nonatomic) NSArray *itemList;
@property (retain, nonatomic) NSNumber *maxCacheCount;

+ (id)stragegyWithItemList:(id)a0;

- (void).cxx_destruct;

@end
