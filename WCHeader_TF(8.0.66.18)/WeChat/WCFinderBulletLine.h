@class NSMutableDictionary;

@interface WCFinderBulletLine : NSObject <NSCopying>

@property (nonatomic) double width;
@property (retain, nonatomic) NSMutableDictionary *items;

- (id)init;
- (BOOL)canInsertItem:(id)a0 after:(id)a1;
- (BOOL)addItem:(id)a0;
- (void)deleteItem:(id)a0;
- (BOOL)insertItemIfPossible:(id)a0;
- (void)forceInsertItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
