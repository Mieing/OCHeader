@protocol BDXSubContextDelegate;

@interface BDXSubContext : NSObject

@property (weak, nonatomic) id<BDXSubContextDelegate> delegate;

+ (id)mergeProp:(id)a0 to:(id)a1 override:(BOOL)a2;
+ (id)mergeArray:(id)a0 to:(id)a1 override:(BOOL)a2;
+ (id)mergeDict:(id)a0 to:(id)a1 override:(BOOL)a2;
+ (id)mergeTable:(id)a0 to:(id)a1 override:(BOOL)a2;

- (void)mergeContext:(id)a0 shouldOverride:(BOOL)a1;
- (id)initWithRootContext:(id)a0;
- (void)onUpdateWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
