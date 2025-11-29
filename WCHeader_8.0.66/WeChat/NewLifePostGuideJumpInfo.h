@class NSMutableArray, FinderObjectEventDesc, FinderLocation;

@interface NewLifePostGuideJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (nonatomic) unsigned int displayStartTime;
@property (nonatomic) unsigned int displayEndTime;
@property (retain, nonatomic) FinderLocation *location;
@property (retain, nonatomic) FinderObjectEventDesc *event;
@property (retain, nonatomic) NSMutableArray *hashTagList;
@property (nonatomic) unsigned long long postGuideId;

+ (void)initialize;

@end
