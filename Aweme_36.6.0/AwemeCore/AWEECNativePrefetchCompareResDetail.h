@class AWEECNativePrefetchProcessor;

@interface AWEECNativePrefetchCompareResDetail : NSObject

@property (nonatomic) unsigned long long res;
@property (weak, nonatomic) AWEECNativePrefetchProcessor *processor;

- (id)initWithCompareRes:(unsigned long long)a0 compareProcessor:(id)a1;
- (id)compareRequestDetail;
- (void).cxx_destruct;

@end
