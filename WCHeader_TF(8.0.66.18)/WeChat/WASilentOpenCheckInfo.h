@class NSString;

@interface WASilentOpenCheckInfo : MMObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long ret;
@property (nonatomic) unsigned int beginTimeStamp;
@property (nonatomic) unsigned int cacheSeconds;

- (void).cxx_destruct;

@end
