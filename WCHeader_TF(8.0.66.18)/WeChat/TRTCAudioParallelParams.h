@class NSArray;

@interface TRTCAudioParallelParams : NSObject

@property (nonatomic) unsigned int maxCount;
@property (retain, nonatomic) NSArray *includeUsers;

- (struct RemoteAudioSelectorParams { unsigned int x0; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x1; BOOL x2; })convertToCppParams;
- (id)init;
- (void).cxx_destruct;

@end
