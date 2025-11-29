@class WCFinderDataItem, NSData, NSString;

@interface WCFinderPreviewLiveCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) int commentScene;
@property (nonatomic) int joinType;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) NSString *sessionExtraKey;
@property (retain, nonatomic) NSData *uxInfo;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *multiStyleInfo;
@property (retain, nonatomic) NSData *previewCookie;

- (id)initWithFinderDataItem:(id)a0 scene:(unsigned long long)a1 liveCookies:(id)a2 sessionBuffer:(id)a3 commentScene:(int)a4 joinType:(int)a5 uxInfo:(id)a6 sessionExtraKey:(id)a7 multiStyleInfo:(id)a8 previewCookie:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void).cxx_destruct;

@end
