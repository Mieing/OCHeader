@class NSString, NSArray, NSData, WCFinderDataItem, NSMutableArray;
@protocol MMFinderLiveFeedFriendsLikeListViewModelDelegate;

@interface MMFinderLiveFeedFriendsLikeListViewModel : MMObject <WCFinderFeedFriendsLikeListExt>

@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) int reportScene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long friendsLikeTotalCount;
@property (retain, nonatomic) NSMutableArray *friendsLikeInfoArray;
@property (retain, nonatomic) NSArray *likeList;
@property (nonatomic) int finderObjectType;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (weak, nonatomic) id<MMFinderLiveFeedFriendsLikeListViewModelDelegate> delegate;
@property (readonly, nonatomic) NSString *titleFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 likeList:(id)a1 reportScene:(int)a2;
- (void)getLocalFriendsLikeInfo;
- (id)convertFinderLikeInfoToFinderComment:(id)a0;
- (id)deafultTitleFormatString;
- (unsigned long long)likeInfoIndexWithWXUsername:(id)a0;
- (void)onFinderFeedLocalFriendsLikeListDataUpdateByKeyExtension:(id)a0;
- (void).cxx_destruct;

@end
