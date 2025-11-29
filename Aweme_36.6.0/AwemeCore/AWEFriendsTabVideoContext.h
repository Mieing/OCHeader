@class NSString;

@interface AWEFriendsTabVideoContext : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long playTime;
@property (nonatomic) int isRealRelation;
@property (nonatomic) int relationTag;
@property (nonatomic) int playFinishTimes;
@property (nonatomic) int hasLiked;
@property (nonatomic) int hasPostedComment;
@property (nonatomic) int hasFamiliarRecommended;
@property (nonatomic) int hasDisliked;
@property (nonatomic) int hasCollected;
@property (nonatomic) int hasShared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
