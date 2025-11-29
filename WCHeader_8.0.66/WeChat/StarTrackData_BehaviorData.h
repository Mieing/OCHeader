@interface StarTrackData_BehaviorData : WXPBGeneratedMessage

@property (nonatomic) unsigned int progressRate;
@property (nonatomic) unsigned int forwardCount;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int friendLikeCount;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int favCount;
@property (nonatomic) float currentPlayPosition;

+ (void)initialize;

@end
