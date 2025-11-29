@class NSString, NSURL;
@protocol IJSC2CodeCacheSource;

@interface JSC2CodeCacheWrap : NSObject

@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) id<IJSC2CodeCacheSource> codeCacheSource;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *cachePathURL;
@property (nonatomic) unsigned long long version;

- (BOOL)isEmpty;
- (void).cxx_destruct;

@end
