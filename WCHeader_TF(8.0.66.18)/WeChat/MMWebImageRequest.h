@class NSURL, MMImageLoaderReqContext;

@interface MMWebImageRequest : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSURL *customIdentifier;
@property (retain, nonatomic) NSURL *darkModeUrl;
@property (retain, nonatomic) NSURL *darkModeCustomIdentifier;
@property (nonatomic) BOOL forceUpdate;
@property (nonatomic) BOOL disableCacheWrite;
@property (nonatomic) BOOL syncReadDiskCache;
@property (nonatomic) BOOL onlyNeedData;
@property (retain, nonatomic) MMImageLoaderReqContext *context;

- (id)initWith:(id)a0 scene:(long long)a1;
- (id)initWithString:(id)a0 scene:(long long)a1;
- (void).cxx_destruct;

@end
