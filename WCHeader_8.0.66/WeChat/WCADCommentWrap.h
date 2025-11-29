@class NSString;

@interface WCADCommentWrap : NSObject

@property (retain, nonatomic) NSString *adID;
@property (retain, nonatomic) NSString *publishID;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned int startPositionType;
@property (nonatomic) unsigned int endPositionType;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) double tableContentY;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *snsStatExt;
@property (retain, nonatomic) NSString *adInfoAddress;
@property (retain, nonatomic) NSString *cacheKey;

- (void).cxx_destruct;

@end
