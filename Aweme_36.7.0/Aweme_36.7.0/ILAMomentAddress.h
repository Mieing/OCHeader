@class NSArray;

@interface ILAMomentAddress : NSObject

@property (copy, nonatomic) NSArray *includeCitys;
@property (copy, nonatomic) NSArray *excludeCitys;

- (struct MomentAddrItem { struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x0; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x1; })getTargetAddress;
- (void).cxx_destruct;

@end
