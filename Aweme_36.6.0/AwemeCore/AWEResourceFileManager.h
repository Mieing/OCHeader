@class NSCache, NSString;
@protocol AWEResourceEventDelegate;

@interface AWEResourceFileManager : NSObject

@property (retain) NSCache *fileMemoryIndexs;
@property (weak, nonatomic) id<AWEResourceEventDelegate> eventDelegate;
@property (nonatomic) BOOL enableMetric;
@property (copy, nonatomic) NSString *rootDirector;
@property (nonatomic) long long maxCacheSize;

+ (id)sharedInstance;

- (id)getPathByChannel:(id)a0;
- (BOOL)isFileExistAtPath:(id)a0;
- (void)handleEnteredForeground;
- (void)createIfNotExistPath:(id)a0;
- (double)cleanSizeWithExpireTimes:(long long)a0;
- (void)cleanResourceWithExpireTimes:(long long)a0;
- (BOOL)cleanAllResourceFile;
- (void)resourceStateDidChange:(id)a0 eventType:(unsigned long long)a1;
- (unsigned long long)getDirSize:(id)a0;
- (unsigned long long)getResourceDirectorType:(id)a0;
- (void)updateMemExist:(id)a0 value:(BOOL)a1;
- (BOOL)isZipFile:(id)a0;
- (id)getFileNameByURLs:(id)a0;
- (void)createIfNotExistPathAndMakResource:(id)a0;
- (BOOL)copyFolderFromPath:(id)a0 toPath:(id)a1;
- (void)cleanAllMemoryCache;
- (void)notifyChannelAccessed:(id)a0 channelPath:(id)a1;
- (id)getFullPathByURLs:(id)a0 channel:(id)a1 extension:(id)a2;
- (void)setResourceDirectorType:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (BOOL)fileExistsAtPath:(id)a0;
- (BOOL)fileExistsAtPath:(id)a0 isDirectory:(BOOL *)a1;
- (BOOL)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (id)contentsAtPath:(id)a0;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)attributesOfFileSystemForPath:(id)a0 error:(id *)a1;

@end
