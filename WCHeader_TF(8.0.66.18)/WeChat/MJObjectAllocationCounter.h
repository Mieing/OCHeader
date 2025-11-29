@interface MJObjectAllocationCounter : NSObject

+ (void)increaseObject:(id)a0;
+ (void)decreaseObject:(id)a0;
+ (void)prune;
+ (void)dump;
+ (id)dictionaryRepresentation;

@end
