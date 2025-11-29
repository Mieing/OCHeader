@interface WeChat.WSNativeHotListHotSearchData : NSObject <WebSearchMgrDelegate> {
    void /* unknown type, empty encoding */ hotSearchCompletion;
    void /* unknown type, empty encoding */ webSearchMgr;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ refreshTitle;
    void /* unknown type, empty encoding */ refreshDocInfo;
    void /* unknown type, empty encoding */ refreshCanShow;
    void /* unknown type, empty encoding */ pos;
    void /* unknown type, empty encoding */ list;
    void /* unknown type, empty encoding */ canShow;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ hasLoaded;
    void /* unknown type, empty encoding */ isCurrentSearchFromRefresh;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ ctx;
    void /* unknown type, empty encoding */ searchID;
    void /* unknown type, empty encoding */ hotSearchReqCacheKey;
    void /* unknown type, empty encoding */ clientExpireTime;
    void /* unknown type, empty encoding */ lastRefreshTime;
    void /* unknown type, empty encoding */ hasHotSearchData;
    void /* unknown type, empty encoding */ hotSearchDataStatusChanged;
    void /* unknown type, empty encoding */ hasReportExpose;
}

- (void)onSearchRecmdDataSuccess:(id)a0;
- (void)onSearchRecmdDataFail:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
