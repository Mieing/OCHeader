@class NSString, MMWebCoreConfig;

@interface MMWebViewPreloadPageDataParameter : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *pageDataKeyUrl;
@property (nonatomic) BOOL isUsePreloadWebView;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) BOOL useOfflineCache;
@property (copy, nonatomic) NSString *sourceUserName;
@property (retain, nonatomic) MMWebCoreConfig *config;

- (id)description;
- (void).cxx_destruct;

@end
