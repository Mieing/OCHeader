@class NSArray;

@interface AnimaXKeyPath : NSObject

@property (readonly, nonatomic) NSArray *keys;

- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; })toStringVector;
- (struct unique_ptr<lynx::animax::AnimaXKeyPath, std::default_delete<lynx::animax::AnimaXKeyPath>> { struct AnimaXKeyPath *x0; })toNative;
- (id)initWithNativeKeyPath:(const void *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKeys:(id)a0;

@end
