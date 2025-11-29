@class NSString, NSMutableSet, NSData, NSMutableArray, WCFinderDataItem;
@protocol WCFinderFeedFriendsLikeListViewModelDelegate;

@interface WCFinderFeedFriendsLikeListViewModel : MMObject <WCFinderFeedFriendsLikeListExt, WCFinderDataItemExt>

@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) unsigned long long fetchScene;
@property (nonatomic) int reportScene;
@property (retain, nonatomic) NSMutableSet *likeIdSet;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned long long friendsLikeTotalCount;
@property (retain, nonatomic) NSMutableArray *friendsLikeInfoArray;
@property (nonatomic) int finderObjectType;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (weak, nonatomic) id<WCFinderFeedFriendsLikeListViewModelDelegate> delegate;
@property (readonly, nonatomic) NSString *titleFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 feedLikedListScene:(unsigned long long)a1 reportScene:(int)a2;
- (void)getLocalFriendsLikeInfo;
- (void)fetchFirstFriendsLikeInfo;
- (void)fetchNextFriendsLikeInfo;
- (void)friendsLikeOptionWithObjectID:(id)a0 index:(unsigned long long)a1 optionType:(unsigned long long)a2;
- (void)friendsLikeDoLikeWithIndex:(unsigned long long)a0 doLike:(BOOL)a1;
- (void)fetchFriendsLikeInfoIsFirstPage:(BOOL)a0;
- (id)convertFinderLikeInfoToFinderComment:(id)a0;
- (void)notifyAddedRefuseFriends;
- (id)deafultTitleFormatString;
- (unsigned long long)likeInfoIndexWithWXUsername:(id)a0;
- (void)onFinderFeedFriendsLikeStatusChangedWithObjectID:(id)a0 index:(unsigned long long)a1 likeStatus:(BOOL)a2;
- (void)onFinderFeedLocalFriendsLikeListDataUpdateByKeyExtension:(id)a0;
- (void).cxx_destruct;

@end
