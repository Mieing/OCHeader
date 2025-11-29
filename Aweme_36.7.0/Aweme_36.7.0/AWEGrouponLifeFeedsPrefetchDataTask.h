@class NSString, NSDictionary, AWEGrouponLifeFeedsPageViewModel, NSError, AWEGrouponLifeFeedsFetchDataTask;

@interface AWEGrouponLifeFeedsPrefetchDataTask : NSObject

@property (copy, nonatomic) NSString *storageId;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) AWEGrouponLifeFeedsPageViewModel *pageViewModel;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL didStart;
@property (retain, nonatomic) AWEGrouponLifeFeedsFetchDataTask *fetchDataTask;
@property (readonly, nonatomic) unsigned long long status;

- (void)didFinishFetchData:(id)a0;
- (id)initWithStorageId:(id)a0 params:(id)a1;
- (void)runWithComplete:(id /* block */)a0;
- (void)invokeFailureCompleteBlockWithError:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
