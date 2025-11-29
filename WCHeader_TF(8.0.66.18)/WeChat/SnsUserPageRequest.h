@class BaseRequest, NSString;

@interface SnsUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long maxId;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned long long minFilterId;
@property (nonatomic) unsigned int lastRequestTime;
@property (nonatomic) unsigned int filterType;
@property (nonatomic) unsigned int pullType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int alreadyPulledCount;
@property (nonatomic) unsigned int checkWithTaEntrance;

+ (void)initialize;

@end
