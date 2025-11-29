@class NSMapTable;

@interface BDPCommonBridge : NSObject <NSCopying>

@property (retain) NSMapTable *jMethods;
@property (retain) NSMapTable *jTagets;

+ (id)sharedBridge;

- (id)invoke:(id)a0;
- (id)instanceOfModule:(Class)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)registerModule:(Class)a0;

@end
