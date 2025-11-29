@class NSMutableArray, NSMutableDictionary;

@interface ACCToolBarItemsModel : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSMutableArray *belowArray;
@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (nonatomic) BOOL initalHasDivision;
@property (nonatomic) BOOL dynamicHasDivision;
@property (nonatomic) BOOL enableHDRRendering;

- (id)barItemWithItemId:(void *)a0;
- (BOOL)addBarItem:(id)a0 position:(long long)a1;
- (void)removeBarItem:(void *)a0 position:(long long)a1;
- (id)barItemsWithPosition:(long long)a0;
- (id)mutableBarItemsWithPosition:(long long)a0;
- (void).cxx_destruct;

@end
