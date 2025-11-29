@interface CJSingleScrollModel : NSObject

@property (nonatomic) int index;
@property (nonatomic) BOOL isAscending;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL needRoll;

- (id)initWith:(int)a0 isAscending:(BOOL)a1 animated:(BOOL)a2;

@end
