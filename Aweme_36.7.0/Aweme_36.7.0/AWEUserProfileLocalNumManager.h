@class NSNumber, NSDate;

@interface AWEUserProfileLocalNumManager : NSObject

@property (retain, nonatomic) NSNumber *likeNum;
@property (retain, nonatomic) NSNumber *postNum;
@property (retain, nonatomic) NSNumber *privateNum;
@property (retain, nonatomic) NSNumber *drafts;
@property (retain, nonatomic) NSNumber *forwardNum;
@property (retain, nonatomic) NSNumber *recycledWorksNum;
@property (retain, nonatomic) NSNumber *hasSoftDeleteForLaunchNum;
@property (retain, nonatomic) NSDate *lockLikeNumExpiryDate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)currentUserPrivateNum;
- (void)didChangeVideoPrivacy:(id)a0;
- (void)didDeleteAweme:(id)a0;
- (void)didPostAweme:(id)a0;
- (BOOL)hasDraft;
- (id)currentUserLikeNum;
- (BOOL)isLockLikeNumUpdate;
- (void)updateUserLikeNum:(id)a0;
- (void)lockLikeNum:(id)a0;
- (void)resetAllNum;
- (void)increaseUserLikeNum;
- (void)decreaseUserLikeNum;
- (void)increaseUserForwardNum;
- (id)currentUserPostNum;
- (void)increaseUserPostNum;
- (void)updateUserPostNum:(id)a0;
- (void)decreaseUserForwardNum;
- (void)decreaseUserPostNum;
- (void)increaseDraft;
- (void)decreaseDraft;
- (void)updateUserDraftNum:(id)a0;
- (void)increaseUserPostNumBy:(long long)a0;
- (id)cloudAlbumNum;
- (void)updateRecycledWorksNum:(id)a0;
- (void)updateUserPrivateNum:(id)a0 shouldShowMixEntrance:(BOOL)a1;
- (void)updateCloudAlbumNum:(id)a0;
- (void)updateUserPrivateNum:(id)a0;
- (BOOL)hasRecycledWorks;
- (BOOL)hasSoftDeleteForLaunch;
- (void)updateUserForwardNum:(id)a0;
- (void)increaseUserPrivateNum;
- (void)increaseRecycledWorksNum;
- (void)decreaseUserPrivateNum;
- (id)cloudAlbumStorageKey;
- (id)currentUserPostAndDraftNum;
- (id)currentUserForwardNum;
- (void).cxx_destruct;
- (id)init;

@end
