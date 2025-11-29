@class NSData, NSString, MentionListLastReadInfo, NSMutableSet, WCFinderListLoadingStateModel, NSMutableArray, WCFinderContact;
@protocol WCFinderNotifySystemMsgVMDelegate;

@interface WCFinderNotifySystemMsgVM : NSObject

@property (retain, nonatomic) WCFinderContact *currentContact;
@property (retain, nonatomic) NSString *currentFinderUsername;
@property (nonatomic) unsigned long long identityScene;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (retain, nonatomic) NSMutableArray *readArray;
@property (retain, nonatomic) NSMutableArray *unreadArray;
@property (retain, nonatomic) NSMutableSet *svrMentionIDSet;
@property (copy, nonatomic) NSData *pageBuffer;
@property (retain, nonatomic) MentionListLastReadInfo *lastReadInfo;
@property (nonatomic) double containerCacheWidth;
@property (weak, nonatomic) id<WCFinderNotifySystemMsgVMDelegate> delegate;

- (id)initWithFinderUsername:(id)a0 identityScene:(unsigned long long)a1;
- (void)fetchFirstPageData;
- (void)refetchData;
- (BOOL)isAuthorScene;
- (void)clearDataWithNotifyChange:(BOOL)a0;
- (void)fetchMoreData;
- (void)_fetchData;
- (void)appendMentionList:(id)a0;
- (unsigned long long)unreadMentionCount;
- (unsigned long long)readMentionCount;
- (BOOL)dataEmpty;
- (id)cellVMWithIndexPath:(id)a0;
- (id)dataSnapshot;
- (void)recalucateCellCacheHeight:(double)a0;
- (long long)getRequestScene;
- (void).cxx_destruct;

@end
