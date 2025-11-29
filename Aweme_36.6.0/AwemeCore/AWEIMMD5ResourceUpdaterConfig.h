@class NSString, AWEIMMD5ResourceFileConfig, NSDictionary;

@interface AWEIMMD5ResourceUpdaterConfig : NSObject

@property (retain, nonatomic) AWEIMMD5ResourceFileConfig *fileConfig;
@property (copy, nonatomic) NSString *md5RequestString;
@property (copy, nonatomic) NSDictionary *md5RequestParams;
@property (copy, nonatomic) NSString *md5StorageCacheKey;
@property (copy, nonatomic) id /* block */ responseMapper;

- (void).cxx_destruct;

@end
