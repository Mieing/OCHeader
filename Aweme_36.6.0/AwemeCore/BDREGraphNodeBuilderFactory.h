@class NSDictionary;

@interface BDREGraphNodeBuilderFactory : NSObject

@property (readonly, nonatomic) NSDictionary *operatorBuilderMap;
@property (readonly, nonatomic) NSDictionary *functionBuilderMap;

+ (id)builderWithOpName:(id)a0;
+ (id)builderWithFuncName:(id)a0;
+ (id)sharedFactory;

- (void).cxx_destruct;
- (id)init;

@end
