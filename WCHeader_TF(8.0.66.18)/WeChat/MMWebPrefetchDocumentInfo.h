@class NSString, NSDictionary;

@interface MMWebPrefetchDocumentInfo : MMObject

@property (nonatomic) unsigned int status;
@property (copy, nonatomic) NSString *htmlString;
@property (retain, nonatomic) NSDictionary *respHeader;
@property (nonatomic) unsigned int maxCacheTime;
@property (nonatomic) unsigned int clientCacheTime;
@property (nonatomic) unsigned int lastModifyTime;
@property (nonatomic) unsigned int checkUpdateTime;
@property (nonatomic) long long checkUpdateTimeInterval;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int prefetchResOption;
@property (nonatomic) unsigned int bizScene;
@property (nonatomic) unsigned int subBizScene;

- (void).cxx_destruct;

@end
