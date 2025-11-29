@class WCFinderSearchDataProvider, WCFinderHotWordFetchCursor, WCFinderSearchMetaData, NSData, WCFinderSearchKVReporter, NSMutableArray, NSString;
@protocol WCFinderSearchDataProviderDelegate;

@interface WCFinderHotWordDataProvider : NSObject <WCFinderSearchDataProvider, WCFinderSearchDataProviderDelegate>

@property (retain, nonatomic) WCFinderSearchDataProvider *feedProvider;
@property (retain, nonatomic) NSData *objHotwordInfoBuff;
@property (weak, nonatomic) id<WCFinderSearchDataProviderDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *contentVMS;
@property (retain, nonatomic) WCFinderHotWordFetchCursor *hotwordCursor;
@property (retain, nonatomic) WCFinderSearchMetaData *metaData;
@property (retain, nonatomic) WCFinderSearchKVReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithObjHotwordInfoBuff:(id)a0;
- (id)text;
- (void)requestPageDatas;
- (void)_requestNextFeedData;
- (void)tryInsertSpliteVM:(id)a0;
- (void)dataProviderFetchFailed:(id)a0;
- (void)dataProvider:(id)a0 appendDataToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)continueWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dataProvider:(id)a0 removeAtIdx:(long long)a1;
- (BOOL)continueFlag;
- (BOOL)loading;
- (id)feedProviderWithHotWord:(id)a0;
- (id)hotwordForContentVM:(id)a0;
- (long long)positionForContentVM:(id)a0;
- (void).cxx_destruct;

@end
