@class ThankRedPackageInfo, NSString, NSData, NSMutableSet, NSMutableArray, WCFinderContact;
@protocol WCFinderFeedLikeListViewModelDelegate;

@interface WCFinderFeedLikeListViewModel : NSObject <WCFinderDataItemExt>

@property (retain, nonatomic) NSMutableArray *likeInfoArray;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceID;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL isFetchNetWork;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSMutableSet *likeIDSet;
@property (nonatomic) unsigned long long commentMaxDisplayNameCount;
@property (nonatomic) BOOL isLike;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) ThankRedPackageInfo *redpackageInfo;
@property (nonatomic) BOOL shouldShowLikeGuide;
@property (weak, nonatomic) id<WCFinderFeedLikeListViewModelDelegate> delegate;
@property (nonatomic) BOOL highlightShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTid:(id)a0 nonceID:(id)a1;
- (id)init;
- (void)setDisplayNameWithLikeInfo:(id)a0;
- (id)likeUsernameSet;
- (void)fetchMoreLikeInfo;
- (void)addToBlackList:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)changeFeedLikeStatus;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)a0;
- (id)calDisplayNameWithCommentDidsplayName:(id)a0;
- (void).cxx_destruct;

@end
