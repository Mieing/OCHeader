@class NSString;

@interface DIRSMMapCache : NSObject

@property (nonatomic) int fd;
@property (nonatomic) BOOL isMapping;
@property (nonatomic) void *object;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long size;

- (BOOL)mmap:(unsigned long long)a0;
- (void)munmap;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;

@end
