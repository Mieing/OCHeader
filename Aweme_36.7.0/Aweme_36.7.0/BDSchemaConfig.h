@class NSArray;

@interface BDSchemaConfig : NSObject

@property (copy, nonatomic) NSArray *interceptors;

+ (id)configInstance;

- (void)addInterceptor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
