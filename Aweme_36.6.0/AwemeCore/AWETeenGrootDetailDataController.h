@class NSString, NSMutableArray;

@interface AWETeenGrootDetailDataController : AWEListDataController

@property (copy, nonatomic) NSString *reactID;
@property (retain, nonatomic) NSMutableArray *deltaModels;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)updateAwemeInfoWithParams:(id)a0;
- (id)initWithReactID:(id)a0;
- (void).cxx_destruct;

@end
