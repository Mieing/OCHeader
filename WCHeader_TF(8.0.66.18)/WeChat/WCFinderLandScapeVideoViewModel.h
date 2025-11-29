@class WCFinderFeedContentVM, NSString, WCFinderDataItem, NSMutableSet, NSData, NSMutableArray, WCFinderLandScapeVCParams;
@protocol WCFinderLandScapeVideoVMDelegate;

@interface WCFinderLandScapeVideoViewModel : NSObject <ILVMinimizeContextModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *encrtptTid;
@property (copy, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSMutableArray *contentVMs;
@property (retain, nonatomic) NSMutableSet *tidSet;
@property (retain, nonatomic) NSData *lastBuf;
@property (nonatomic) BOOL continueflag;
@property (nonatomic) BOOL listLoading;
@property (nonatomic) BOOL itemLoading;
@property (nonatomic) BOOL hasGetFirstPlayableItem;
@property (retain, nonatomic) WCFinderLandScapeVCParams *params;
@property (retain, nonatomic) WCFinderFeedContentVM *enterContentVM;
@property (retain, nonatomic) WCFinderFeedContentVM *currentPlayContentVM;
@property (nonatomic) BOOL isFetchingContinuePlay;
@property (retain, nonatomic) NSData *continuePlayLastBuf;
@property (retain, nonatomic) NSMutableArray *continuePlayContentVMs;
@property (retain, nonatomic) WCFinderDataItem *enterFinderDataItem;
@property (weak, nonatomic) id<WCFinderLandScapeVideoVMDelegate> delegate;

+ (int)getCommentScene;

- (id)playingContentVM;
- (id)nextContentVM;
- (void)updatePlayingContentVM:(id)a0 isFromContinuePlay:(BOOL)a1;
- (void)fetchContinuePlayFeed;
- (id)openParam;
- (int)listType;
- (id)initWithTid:(id)a0 nonceId:(id)a1 params:(id)a2;
- (id)initWithEncryptTid:(id)a0 nonceId:(id)a1 params:(id)a2;
- (id)initWithFinderDataItem:(id)a0 params:(id)a1;
- (void)_baseInit;
- (BOOL)getLocalData;
- (void)fetchDataItem;
- (void)fetchDataItemAndReleatedList;
- (void)_fetchDataItemAndGetReleatedList:(BOOL)a0;
- (void)fetchReleatedDataItem;
- (void)fetchReleatedDataItemWithLongVideoContext:(id)a0;
- (id)genLocationInfo;
- (void)preFetchContinuePlayFeed;
- (BOOL)isLoading;
- (id)genContentVMWithDataItem:(id)a0;
- (void)appendDataItem:(id)a0;
- (unsigned long long)dataCount;
- (id)contentVmAtIndex:(unsigned long long)a0;
- (id)nextContinuePlayContentVM:(unsigned long long)a0;
- (long long)indexAtContentVM:(id)a0;
- (long long)indexOfTid:(id)a0;
- (long long)nextContinuePlayableFeedIndexOfTid:(id)a0;
- (void)updateCurrentPlayContentVM:(id)a0;
- (void)removeAllDatas;
- (void)cleanContinuePlayData;
- (void)refreshAfterSelectContentVM:(id)a0;
- (id)genLongVideoContextWithAddTopFeeds:(id)a0;
- (void)handleFetchDataCgiFailErrCode:(int)a0 baseErrMsg:(id)a1;
- (void).cxx_destruct;

@end
