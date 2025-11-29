@class NSURL, NSString, NSDictionary;

@interface AWEFileStreamDownloaderConfig : NSObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *urlKey;
@property (copy, nonatomic) NSURL *cacheDir;
@property (copy, nonatomic) NSDictionary *headerParams;
@property (copy, nonatomic) id /* block */ processHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double targetTime;

- (void).cxx_destruct;

@end
