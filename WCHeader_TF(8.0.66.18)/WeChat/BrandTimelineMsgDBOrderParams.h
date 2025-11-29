@interface BrandTimelineMsgDBOrderParams : NSObject

@property (readonly, nonatomic) unsigned long long seqId;
@property (nonatomic) unsigned int groupId;
@property (nonatomic) unsigned int predict;
@property (nonatomic) unsigned int orderId;
@property (nonatomic) BOOL assignLimitWeight;

+ (unsigned long long)genSeqIdByGroupId:(unsigned int)a0 predict:(unsigned int)a1 orderId:(unsigned int)a2;
+ (void)retriveGroupId:(unsigned int *)a0 predict:(unsigned int *)a1 orderId:(unsigned int *)a2 bySeqId:(unsigned long long)a3;

- (id)initWithSeqId:(unsigned long long)a0;
- (id)initWithGroupId:(unsigned int)a0 predict:(unsigned int)a1 orderId:(unsigned int)a2;

@end
