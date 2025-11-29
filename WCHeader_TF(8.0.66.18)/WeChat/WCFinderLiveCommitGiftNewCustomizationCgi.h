@class NSData, NSString, NSMutableArray;

@interface WCFinderLiveCommitGiftNewCustomizationCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *giftProductId;
@property (nonatomic) BOOL modifyNewCustomText;
@property (retain, nonatomic) NSString *targetCustomText;
@property (retain, nonatomic) NSMutableArray *componentKeyList;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 liveCookies:(id)a1 giftProductId:(id)a2 modifyNewCustomText:(BOOL)a3 newCustomText:(id)a4 componentKeyList:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
