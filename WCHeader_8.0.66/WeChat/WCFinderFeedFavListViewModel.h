@class ThankRedPackageInfo, WCFinderFeedContentVM, NSData, NSMutableSet, NSMutableArray, WCFinderContact;
@protocol WCFinderFeedFavListViewModelDelegate;

@interface WCFinderFeedFavListViewModel : NSObject

@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL isFetchNetWork;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) long long totalCount;
@property (nonatomic) unsigned long long privateLikeCount;
@property (nonatomic) unsigned long long snsPrivateLikeCount;
@property (nonatomic) unsigned long long commentPrivateLikeCount;
@property (nonatomic) unsigned long long fromMySnsFingerlikeCount;
@property (retain, nonatomic) NSMutableArray *favInfoArray;
@property (retain, nonatomic) NSMutableSet *favIDSet;
@property (nonatomic) unsigned long long commentMaxDisplayNameCount;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) ThankRedPackageInfo *redpackageInfo;
@property (weak, nonatomic) id<WCFinderFeedFavListViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) BOOL highlightShowed;

- (id)initWithContentVM:(id)a0;
- (void)fetchMoreFavInfo;
- (id)likeCountTipsText;
- (id)likeCountDescriptionText;
- (void)setDisplayNameWithFavInfo:(id)a0;
- (id)calDisplayNameWithCommentDidsplayName:(id)a0;
- (void)addToBlackList:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void).cxx_destruct;

@end
