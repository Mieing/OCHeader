@class NSMutableArray, WCFinderAdFeedbackParams;

@interface WCFinderAdFeedbackCGI : WCFinderBaseCgi

@property (nonatomic) int feedbackType;
@property (retain, nonatomic) NSMutableArray *reasonArray;
@property (retain, nonatomic) WCFinderAdFeedbackParams *params;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFeedbackType:(int)a0 reasonArray:(id)a1 params:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (BOOL)needADDeviceInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
