@class NSMutableArray;

@interface CMStack : NSObject

@property (readonly, nonatomic) NSMutableArray *objects;

- (id)pop;
- (id)peek;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
