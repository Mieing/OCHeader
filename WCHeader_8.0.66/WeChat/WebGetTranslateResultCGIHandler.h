@class NSString, MMWebTransPack, NSDate;

@interface WebGetTranslateResultCGIHandler : NSObject <PBMessageObserverDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) WebGetTranslateResultCGIHandler *selfRetain;
@property (copy, nonatomic) NSString *barNowTitle;
@property (retain, nonatomic) MMWebTransPack *sendPack;
@property (retain, nonatomic) NSDate *sendTime;
@property (retain, nonatomic) NSDate *receiveTime;
@property (nonatomic) unsigned long long interval;

+ (void)sendRequestWithSendPack:(id)a0 webUrl:(id)a1 completion:(id /* block */)a2;

- (id)initWithCompletion:(id /* block */)a0;
- (void)asyncReleaseSelf;
- (void)dealloc;
- (void)sendRequest:(id)a0 webUrl:(id)a1;
- (void)handleCheckTranslateFeedsDataResp:(id)a0;
- (void)callbackCompletionIsSuccess:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
