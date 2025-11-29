@class NSArray, AWEECNativePrefetchProcessor;

@interface AWEECNativePrefetchFindReuseProcessorRes : NSObject

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSArray *matchRes;
@property (retain, nonatomic) AWEECNativePrefetchProcessor *processor;

- (id)matchResDetail;
- (id)matchRequestParamsDetail;
- (void).cxx_destruct;

@end
