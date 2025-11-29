@class NSMutableArray, NSMapTable;

@interface BDRAttributedMapNode : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMapTable *itemRanges;

- (void).cxx_destruct;
- (id)init;

@end
