@class MMLiveTaskId;

@interface MMLiveLikePostTask : NSObject

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) BOOL isClipMode;
@property (nonatomic) unsigned long long previousLikeCount;
@property (nonatomic) unsigned long long doubleClickLikeCount;

- (void).cxx_destruct;

@end
