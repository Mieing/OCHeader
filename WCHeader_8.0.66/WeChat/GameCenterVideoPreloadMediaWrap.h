@class NSString;

@interface GameCenterVideoPreloadMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *url;

+ (id)getCacheIdentifyFromUrl:(id)a0;

- (id)getMediaWrapUrl;
- (id)initWithUrl:(id)a0;
- (id)getMediaWrapIdentifier;
- (BOOL)isLIFOPreloadTask;
- (id)getTempDirectory;
- (void).cxx_destruct;

@end
