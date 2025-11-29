@class NSMutableSet;
@protocol AWEHttpTask;

@interface AWEGrouponLifeFeedsVideoPreloadPlugin : AWEGrouponLifeFeedsBasePlugin

@property (retain, nonatomic) NSMutableSet *nodeTagSet;
@property (retain, nonatomic) id<AWEHttpTask> currentRequestTask;

- (void)bindPageViewModel:(id)a0 incrementNodeTags:(id)a1;
- (void)requestAwemeWithParamDict:(id)a0 requestVMList:(id)a1;
- (void).cxx_destruct;

@end
