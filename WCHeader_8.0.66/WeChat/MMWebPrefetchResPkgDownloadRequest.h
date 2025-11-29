@class NSString;

@interface MMWebPrefetchResPkgDownloadRequest : NSObject

@property (copy, nonatomic) NSString *packageIdentifier;
@property (copy, nonatomic) NSString *packageUrl;
@property (copy, nonatomic) NSString *packageMd5;
@property (copy, nonatomic) NSString *packageVersion;
@property (nonatomic) unsigned int requestId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subScene;

- (void).cxx_destruct;

@end
