@class NSHashTable;

@interface IESECPDPSliceUpdateContext : NSObject

@property (retain, nonatomic) NSHashTable *viewList;
@property (nonatomic) long long pdpTimes;

+ (void)setNeedRelayout:(id)a0;
+ (long long)enterProductDetail;
+ (BOOL)viewNeedRelayout:(id)a0;
+ (void)removeNeedRelayout:(id)a0;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
