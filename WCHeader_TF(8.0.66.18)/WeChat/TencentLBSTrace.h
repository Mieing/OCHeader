@class TencentLBSCalman, NSMutableArray;

@interface TencentLBSTrace : NSObject

@property (nonatomic) unsigned long long maxSize;
@property (nonatomic) unsigned long long coreSize;
@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) TencentLBSCalman *calman;

- (id)initWithMaxSize:(unsigned long long)a0 coreSize:(unsigned long long)a1;
- (void)reset;
- (void)addWithTencentLBSLocation:(id)a0;
- (BOOL)isCurrentOKWithTencentLBSLocation:(id)a0;
- (BOOL)isCurrentOK:(id)a0;
- (BOOL)isFilterEnabled;
- (void)calmanFilter:(id)a0;
- (void).cxx_destruct;

@end
