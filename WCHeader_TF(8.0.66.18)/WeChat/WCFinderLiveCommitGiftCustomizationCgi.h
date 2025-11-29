@class NSData, NSString;

@interface WCFinderLiveCommitGiftCustomizationCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *giftProductId;
@property (nonatomic) BOOL styleChanged;
@property (retain, nonatomic) NSString *targetStyleId;
@property (retain, nonatomic) NSString *targetCustomText;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 liveCookies:(id)a1 giftProductId:(id)a2 styleChanged:(BOOL)a3 styleId:(id)a4 newCustomText:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
