@class WCAppAuthFetchLogic, WCAppAuthSearchLogic, WCAppAuthOpLogic, NSString, NSMutableArray, NSMutableDictionary;
@protocol WCAppAuthLogicDelegate;

@interface WCAppAuthLogicController : MMObject <WCAppAuthFetchLogicDelegate, WCAppAuthSearchLogicDelegate, WCAppAuthOpLogicDelegate> {
    NSMutableDictionary *_dicFetchResult;
}

@property (weak, nonatomic) id<WCAppAuthLogicDelegate> delegate;
@property (retain, nonatomic) WCAppAuthFetchLogic *fetchLogic;
@property (retain, nonatomic) WCAppAuthSearchLogic *searchLogic;
@property (retain, nonatomic) WCAppAuthOpLogic *opLogic;
@property (retain, nonatomic) NSMutableArray *fetchResult;
@property (retain, nonatomic) NSMutableArray *searchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)fetchList;
- (void)searchApps:(id)a0;
- (void)cancelSearch;
- (void)modifyOAuthLogin:(id)a0 Scene:(unsigned int)a1;
- (void)modifyAppScope:(id)a0 scope:(id)a1 Scene:(unsigned int)a2;
- (void)deleteApp:(id)a0 scene:(unsigned int)a1 inView:(id)a2;
- (void)doDeleteApp:(id)a0 scene:(unsigned int)a1;
- (BOOL)isFetchEnd;
- (BOOL)isSearching;
- (BOOL)isSearchEnd;
- (id)getFetchedAppIds;
- (id)getSearchedAppIds;
- (void)clearSearchedResult;
- (id)getFetchResultItemByIndex:(unsigned int)a0;
- (id)getSearchResultItemByIndex:(unsigned int)a0;
- (id)getFetchResultItemByAppId:(id)a0;
- (void)fetchDidFailWithErrCode:(int)a0 errMsg:(id)a1;
- (void)fetchDidSucceedWithApps:(id)a0;
- (void)fetchDidFinish;
- (void)searchWillBeginNewTextSearch;
- (void)searchDidFailWithErrCode:(int)a0 errMsg:(id)a1;
- (void)searchDidSucceedWithApps:(id)a0;
- (void)searchDidFinish;
- (void)modificationDidFailWithErrCode:(int)a0 errMsg:(id)a1;
- (void)modificationDidSucceed:(int)a0;
- (void)deletionDidSucceedForAppId:(id)a0;
- (void)deletionDidFail:(id)a0 errCode:(int)a1 errMsg:(id)a2;
- (void).cxx_destruct;

@end
