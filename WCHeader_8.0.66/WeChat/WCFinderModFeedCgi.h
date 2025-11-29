@class NSString, WCFinderModFeedOptionModel;

@interface WCFinderModFeedCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) WCFinderModFeedOptionModel *optionModel;
@property (copy, nonatomic) id /* block */ sucBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFeedId:(id)a0 fromUsername:(id)a1 optionModel:(id)a2 sucBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
