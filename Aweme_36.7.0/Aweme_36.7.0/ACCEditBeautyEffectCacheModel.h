@class NSDictionary, NSMutableArray;

@interface ACCEditBeautyEffectCacheModel : NSObject

@property (nonatomic) BOOL isBeautyTurnedOff;
@property (retain, nonatomic) NSMutableArray *appliedItems;
@property (copy, nonatomic) NSDictionary *items;

+ (id)generateCacheModelFromDictionary:(id)a0;

- (id)itemsWithResourceIdAsKey;
- (void).cxx_destruct;
- (id)init;
- (id)toDict;

@end
