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

- (void)setCheckWithTaEntrance:(unsigned int)a0;
- (unsigned int)checkWithTaEntrance;
- (void)setAlreadyPulledCount:(unsigned int)a0;
- (unsigned int)alreadyPulledCount;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setPullType:(unsigned int)a0;
- (unsigned int)pullType;
- (void)setFilterType:(unsigned int)a0;
- (unsigned int)filterType;
- (void)setLastRequestTime:(unsigned int)a0;
- (unsigned int)lastRequestTime;
- (void)setMinFilterId:(unsigned long long)a0;
- (unsigned long long)minFilterId;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setMaxId:(unsigned long long)a0;
- (unsigned long long)maxId;
- (void)setUsername:(id)a0;
- (id)username;
- (void)setFirstPageMd5:(id)a0;
- (id)firstPageMd5;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
