@class NSNumber, NSDate;

@interface AWETeenUserProfileLocalNumManager : NSObject

@property (retain, nonatomic) NSNumber *likeNum;
@property (retain, nonatomic) NSNumber *collectNum;
@property (retain, nonatomic) NSDate *lockLikeNumExpiryDate;

+ (id)sharedInstance;

- (id)currentUserLikeNum;
- (BOOL)isLockLikeNumUpdate;
- (void)updateUserLikeNum:(id)a0;
- (void)lockLikeNum:(id)a0;
- (void)updateUserCollectionNum:(id)a0;
- (void)resetAllNum;
- (void)increaseUserLikeNum;
- (void)increaseUserCollectionNum;
- (void)decreaseUserLikeNum;
- (void)decreaseUserCollectionNum;
- (id)currentUserCollectNum;
- (void).cxx_destruct;

@end
