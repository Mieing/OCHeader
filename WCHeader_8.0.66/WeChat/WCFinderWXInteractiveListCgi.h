@class NSData, NSString, FinderClientStatus;

@interface WCFinderWXInteractiveListCgi : WCFinderBaseCgi

@property (nonatomic) long long flag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) int itemFlag;
@property (copy, nonatomic) id /* block */ sucBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFlag:(long long)a0 lastBuffer:(id)a1 finderUsername:(id)a2 status:(id)a3 itemFlag:(int)a4 sucBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
