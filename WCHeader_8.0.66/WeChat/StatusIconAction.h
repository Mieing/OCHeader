@class NSString, NSMutableArray;

@interface StatusIconAction : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned long long extOption;
@property (retain, nonatomic) NSMutableArray *iconDescriptions;
@property (retain, nonatomic) NSMutableArray *clusterDescriptions;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) unsigned int order;
@property (retain, nonatomic) NSMutableArray *otherClusterDescriptions;
@property (retain, nonatomic) NSString *bigIconUrl;
@property (retain, nonatomic) NSString *unreadTextColor;
@property (retain, nonatomic) NSMutableArray *clusterWithMeDescriptions;
@property (retain, nonatomic) NSMutableArray *clusterOnlyMeDescriptions;

+ (void)initialize;

- (void)setClusterOnlyMeDescriptions:(id)a0;
- (id)clusterOnlyMeDescriptions;
- (void)setClusterWithMeDescriptions:(id)a0;
- (id)clusterWithMeDescriptions;
- (void)setUnreadTextColor:(id)a0;
- (id)unreadTextColor;
- (void)setBigIconUrl:(id)a0;
- (id)bigIconUrl;
- (void)setOtherClusterDescriptions:(id)a0;
- (id)otherClusterDescriptions;
- (void)setOrder:(unsigned int)a0;
- (unsigned int)order;
- (void)setGroupId:(id)a0;
- (id)groupId;
- (void)setEndTime:(unsigned int)a0;
- (unsigned int)endTime;
- (void)setBeginTime:(unsigned int)a0;
- (unsigned int)beginTime;
- (void)setClusterDescriptions:(id)a0;
- (id)clusterDescriptions;
- (void)setIconDescriptions:(id)a0;
- (id)iconDescriptions;
- (void)setExtOption:(unsigned long long)a0;
- (unsigned long long)extOption;
- (void)setUrl:(id)a0;
- (id)url;

@end
