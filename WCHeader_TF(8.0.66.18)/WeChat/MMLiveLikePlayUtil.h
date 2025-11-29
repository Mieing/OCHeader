@class MMLiveDisplayLink, MMLiveTaskId, NSMutableArray;

@interface MMLiveLikePlayUtil : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) unsigned long long lastLikeCount;
@property (nonatomic) unsigned long long allAnimatedLikeCount;
@property (nonatomic) unsigned long long animatedLikeCount;
@property (nonatomic) double animatedLikeFrequence;
@property (nonatomic) unsigned long long allAnimatedHeadImageCount;
@property (nonatomic) unsigned long long animatedHeadImageCount;
@property (nonatomic) double animatedHeadImageFrequence;
@property (nonatomic) BOOL likeAnimating;
@property (nonatomic) BOOL likeHeadImageAnimating;
@property (retain, nonatomic) NSMutableArray *headImageContactList;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) MMLiveDisplayLink *timer;
@property (copy, nonatomic) id /* block */ invokeLikeBlock;
@property (copy, nonatomic) id /* block */ invokeHeadImageBlock;
@property (copy, nonatomic) id /* block */ showLikeBlock;
@property (copy, nonatomic) id /* block */ hideLikeBlock;
@property (nonatomic) double likeAnimateLimitFrequence;
@property (nonatomic) BOOL showHeadImage;

- (id)initWithTaskId:(id)a0;
- (id)initWithScene:(unsigned long long)a0;
- (void)dealloc;
- (void)updateLikeCount:(unsigned long long)a0;
- (void)updateLikeCountWithoutAnimation:(unsigned long long)a0;
- (void)startLikeAnimation;
- (void)startLikeHeadImageAnimation;
- (void)updateLikeHeadImageAnimation:(id)a0;
- (void)endPlayLike;
- (void).cxx_destruct;

@end
