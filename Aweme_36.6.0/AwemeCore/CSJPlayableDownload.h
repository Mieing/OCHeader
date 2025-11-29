@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CSJPlayableDownload : NSObject <BUZipArchiveDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (copy, nonatomic) NSString *currentZipUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlayableDownload;

- (id)bu_playableCachePath;
- (void)downloadDataWithUrl:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (BOOL)bu_unzipFileAtPath:(id)a0 toDestination:(id)a1;
- (BOOL)existDataWithRelativePath:(id)a0;
- (void)downloadDataAndTrackWithMeta:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (id)relativePath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
