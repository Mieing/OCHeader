@class MMLiveTaskId;

@interface MMLiveLikeInfo : NSObject

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) unsigned long long displayLikeCount;
@property (nonatomic) unsigned long long selfLikeCount;

- (void)addDisplayLikeCount;
- (void).cxx_destruct;

@end
