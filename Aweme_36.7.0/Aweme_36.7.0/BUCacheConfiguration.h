@class NSString, NSArray, NSURL, BUContentInfo, NSLock;

@interface BUCacheConfiguration : NSObject <NSCoding>

@property (retain, nonatomic) NSLock *cacheFragmentsLock;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) float version;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSArray *cacheFragments;
@property (retain, nonatomic) BUContentInfo *contentInfo;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) long long downloadedBytes;

+ (id)configurationFilePathForFilePath:(id)a0;
+ (id)configurationWithMP4FilePath:(id)a0 downloadURL:(id)a1;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })unionStickyFragment:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 range2:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addDownloadedBytes:(long long)a0 spent:(double)a1;
- (void)addCacheFragment:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)save;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
