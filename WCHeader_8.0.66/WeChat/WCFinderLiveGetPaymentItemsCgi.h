@class NSString;

@interface WCFinderLiveGetPaymentItemsCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *eventTitle;
@property (retain, nonatomic) NSString *eventDescription;
@property (retain, nonatomic) NSString *referenceId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithPaymentBuffer:(id)a0 eventTitle:(id)a1 eventDescription:(id)a2 referenceId:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initWithPaymentBuffer:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
