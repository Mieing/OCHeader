@class NSString, NSMutableSet, NSData, NSMutableArray, WCFinderCommentImageBrowseConfig;
@protocol WCFinderCommentImageBrowseVMDelegate;

@interface WCFinderCommentImageBrowseViewModel : NSObject <WCFinderDataItemExt, WCFinderSelfContactExt, WCFinderPostingCommentExt>

@property (retain) WCFinderCommentImageBrowseConfig *config;
@property (retain) NSMutableArray *mComments;
@property (retain) NSMutableSet *commentIdSet;
@property (nonatomic) BOOL didFetchImageComments;
@property (weak, nonatomic) id<WCFinderCommentImageBrowseVMDelegate> delegate;
@property (nonatomic) BOOL feedWasDeleted;
@property (retain) NSData *lastBuffer;
@property (nonatomic) BOOL upContinue;
@property (nonatomic) BOOL downContinue;
@property (nonatomic) BOOL isLoadingLastComments;
@property (nonatomic) BOOL isLoadingNextComments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 comments:(id)a1 delegate:(id)a2;
- (void)setup;
- (id)allComments;
- (unsigned long long)indexOfCommentID:(unsigned long long)a0;
- (id)validTopIndexPath;
- (void)fetchCommentsForRefCommentID:(unsigned long long)a0 isRollingUp:(BOOL)a1;
- (BOOL)rollingUpHasMoreData;
- (BOOL)rollingDownHasMoreData;
- (void)onFinderDataItemBeDeletedWithTid:(id)a0;
- (void)onChangeSelectedFinderUsername:(id)a0;
- (BOOL)shouldCloseCommnet;
- (BOOL)isLimitedByYoungCheck;
- (BOOL)isCommentFunctionEnable;
- (void)updateReplyScene:(unsigned long long)a0;
- (void)updateCommentIdentityType:(unsigned long long)a0;
- (void)replyToComment:(id)a0 postingComment:(id)a1 rootCommentID:(unsigned long long)a2;
- (void)replyWithSubComment:(id)a0;
- (void)onFinderDataItemPostComment:(id)a0 tid:(id)a1;
- (void)onFinderDataItemPostCommentSuccessful:(id)a0 tid:(id)a1;
- (void)onFinderDataItemPostCommentFail:(id)a0 tid:(id)a1;
- (void)onFinderDataItemPostSubComment:(id)a0 tid:(id)a1 rootCommentID:(unsigned long long)a2;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)a0 tid:(id)a1 rootCommentID:(unsigned long long)a2;
- (void)onFinderDataItemPostSubCommentFail:(id)a0 tid:(id)a1 rootCommentID:(unsigned long long)a2 retCode:(int)a3;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)a0 errorCode:(int)a1 errorMsg:(id)a2;
- (void)clickCommentLikeAction:(id)a0;
- (BOOL)isAuthorSelf;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)a0 commentID:(unsigned long long)a1 rootCommentID:(unsigned long long)a2 likeStatus:(BOOL)a3;
- (void).cxx_destruct;

@end
