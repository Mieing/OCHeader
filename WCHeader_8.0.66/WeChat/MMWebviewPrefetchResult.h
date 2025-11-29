@class NSString, NSDictionary;

@interface MMWebviewPrefetchResult : MMObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *blankPlaceHolderUrl;
@property (copy, nonatomic) NSString *htmlString;
@property (nonatomic) unsigned int prefetchResourseOption;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int maxCacheTime;
@property (nonatomic) unsigned int lastModifyTime;
@property (nonatomic) long long checkUpdateTimeInterval;
@property (nonatomic) unsigned int checkUpdateTime;
@property (retain, nonatomic) NSDictionary *docRespHeader;
@property (nonatomic) unsigned int bizScene;
@property (nonatomic) unsigned int subBizScene;

- (id)description;
- (void).cxx_destruct;

@end
