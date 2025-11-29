@class WCFinderBaseCgi, NSMutableDictionary, WCFinderCustomBusinessFeedIDModel, NSMutableArray, WCFinderGeneralJumpErrMsgModel;
@protocol WCFinderBusinessCustomListDetailViewModelDelegate;

@interface WCFinderBusinessCustomListDetailViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *businessArray;
@property (retain, nonatomic) NSMutableDictionary *businessFeedDic;
@property (retain, nonatomic) NSMutableArray *allSearchDataItems;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) WCFinderBaseCgi *loadingNextUpCgi;
@property (retain, nonatomic) WCFinderBaseCgi *loadingNextDownCgi;
@property (copy, nonatomic) id /* block */ loadingNextDownBlock;
@property (nonatomic) long long batchFetchFeedsMaxCount;
@property (nonatomic) long long preFetchTopCount;
@property (nonatomic) BOOL startFeedExist;
@property (retain, nonatomic) WCFinderGeneralJumpErrMsgModel *errMsgModel;
@property (weak, nonatomic) id<WCFinderBusinessCustomListDetailViewModelDelegate> delegate;
@property (readonly, nonatomic) BOOL upContinueFlag;
@property (retain, nonatomic) WCFinderCustomBusinessFeedIDModel *startFeedIdModel;

- (id)initWithCommentScene:(int)a0;
- (BOOL)isUpContentFeed:(id)a0;
- (unsigned long long)getStartFeedIndex;
- (void)appendBusinessModelArray:(id)a0;
- (BOOL)isNoMoreData;
- (id)searchDataItemAtIndexPath:(id)a0;
- (id)searchDataItemAtSection:(long long)a0;
- (id)contentVMWithTid:(id)a0;
- (long long)contentIndexOfTid:(id)a0;
- (long long)numberOfSection;
- (void)onQueryNextTopDataItems;
- (void)onPreFetchNextTopDataItems;
- (void)_onQueryTopDataItems:(unsigned long long)a0 isPrefetch:(BOOL)a1;
- (id)getTopDataItemsArray;
- (void)onQueryNextPageDataItems;
- (void)handleFirstFetchDataCgiFailErrCode:(int)a0 baseErrMsg:(id)a1;
- (void)onTopicFinderDataItemDelete:(id)a0;
- (BOOL)isLoading;
- (unsigned long long)getRemainFeedSectionFromContentVM:(id)a0;
- (void).cxx_destruct;

@end
