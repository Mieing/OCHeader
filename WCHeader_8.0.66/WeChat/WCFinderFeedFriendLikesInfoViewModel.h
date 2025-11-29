@class NSArray, NSString, WCFinderFeedContentVM;

@interface WCFinderFeedFriendLikesInfoViewModel : NSObject

@property (nonatomic) BOOL isDisplayRecommend;
@property (nonatomic) BOOL hideFriendLikeInfo;
@property (nonatomic) BOOL disPlayFollowLikeBtn;
@property (nonatomic) BOOL onlyShowRecommendReason;
@property (nonatomic) unsigned long long flag;
@property (retain, nonatomic) NSArray *multiIconReasonCache;
@property (copy, nonatomic) NSString *mulitIconReasonPostfixCache;
@property (retain, nonatomic) NSArray *likeInfoArray;
@property (nonatomic) unsigned long long likeCount;
@property (retain, nonatomic) NSString *reasonString;
@property (retain, nonatomic) NSArray *comboLikeArrayCache;
@property (weak, nonatomic) WCFinderFeedContentVM *contentVM;
@property (copy, nonatomic) NSArray *likeModels;
@property (nonatomic) BOOL hasShowCarousel;
@property (readonly, nonatomic) BOOL hasComboLikeModel;

- (id)initWithContentVM:(id)a0 flag:(unsigned long long)a1;
- (void)updateCache:(id)a0;
- (id)multiIconReasonCacheArray:(id)a0;
- (BOOL)checkShouldReloadWithContentVM:(id)a0 flag:(unsigned long long)a1;
- (id)createViewModelWithContentVM:(id)a0 inserSelf:(BOOL)a1;
- (id)getDisplayCommentInfo:(id)a0;
- (id)selfLikeTailString;
- (id)createSelfInsertLikeModel;
- (void)bindReport:(id)a0 thankButton:(id)a1;
- (BOOL)canShowThanksButtonUI;
- (id)getTopComboLikeArrayWithContentVM:(id)a0;
- (void).cxx_destruct;

@end
