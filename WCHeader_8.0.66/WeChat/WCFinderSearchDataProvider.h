@class WCFinderSearchMetaData, NSString, NSData, WCFinderSearchKVReporter, WCFinderSearchHotWord, NSMutableArray;
@protocol WCFinderSearchDataProviderDelegate;

@interface WCFinderSearchDataProvider : NSObject <WCFinderSearchDataProvider>

@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) WCFinderSearchHotWord *hotword;
@property (retain, nonatomic) NSMutableArray *contentVMS;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL loading;
@property (retain, nonatomic) WCFinderSearchMetaData *metaData;
@property (retain, nonatomic) NSData *objHotwordInfoBuff;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) WCFinderSearchKVReporter *reporter;
@property (weak, nonatomic) id<WCFinderSearchDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithReqeustId:(id)a0;
- (void)requestPageDatas;
- (id)queryParams;
- (void)reportSearchSuccess:(BOOL)a0 requestId:(id)a1;
- (void).cxx_destruct;

@end
