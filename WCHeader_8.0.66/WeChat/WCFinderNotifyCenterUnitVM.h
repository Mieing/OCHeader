@class NSData, ThankRedPackageInfo, MentionListLastReadInfo, NSMutableSet, WCFinderListLoadingStateModel, NSMutableArray, WCFinderContact;
@protocol WCFinderNotifyCenterUnitVMDelegate;

@interface WCFinderNotifyCenterUnitVM : NSObject

@property (nonatomic) unsigned long long tabType;
@property (retain, nonatomic) WCFinderContact *currentContact;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (retain, nonatomic) NSMutableArray *readArray;
@property (retain, nonatomic) NSMutableArray *unreadArray;
@property (retain, nonatomic) NSMutableSet *svrMentionIDSet;
@property (copy, nonatomic) NSData *pageBuffer;
@property (retain, nonatomic) ThankRedPackageInfo *redPackageBannerInfo;
@property (retain, nonatomic) MentionListLastReadInfo *lastReadInfo;
@property (nonatomic) double cacheContainerWidth;
@property (nonatomic) BOOL shouldShowIgnoreTips;
@property (nonatomic) BOOL ignoredMentionsExpanded;
@property (weak, nonatomic) id<WCFinderNotifyCenterUnitVMDelegate> delegate;

- (id)initWithContact:(id)a0 tabType:(unsigned long long)a1;
- (void)fetchFirstPageData;
- (void)refetchData;
- (void)clearDataWithNotifyChange:(BOOL)a0;
- (void)clearData;
- (void)expandIgnoredMentionWithCompletion:(id /* block */)a0;
- (void)fetchMoreData;
- (void)_fetchDataWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)appendMentionList:(id)a0;
- (long long)getRequestScene;
- (void)cleanUnreadCount;
- (id)cellVMWithSectionID:(id)a0 index:(unsigned long long)a1;
- (unsigned long long)unreadMentionCount;
- (unsigned long long)readMentionCount;
- (BOOL)dataEmpty;
- (id)dataSnapshot;
- (void)closeIgnoreTips;
- (BOOL)shouldShowExpandFooter;
- (void)deleteMentionAtIndex:(unsigned long long)a0 withSectionID:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)addToBlackListWithMention:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)recalucateCellCacheHeight:(double)a0;
- (void).cxx_destruct;

@end
