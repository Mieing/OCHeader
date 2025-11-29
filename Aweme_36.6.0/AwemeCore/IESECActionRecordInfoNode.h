@class NSDictionary;

@interface IESECActionRecordInfoNode : IESECActionRecordBaseNode

@property (copy, nonatomic) NSDictionary *info;

- (id)initWithAction:(unsigned long long)a0 info:(id)a1;
- (void).cxx_destruct;

@end
