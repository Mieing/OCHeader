@interface WrapMemoryRecordData : MMObject

@property (nonatomic) unsigned long long m_caseID;
@property (nonatomic) long long m_curMemory;

+ (id)recordDataWithMemory:(long long)a0 onCase:(unsigned long long)a1;

- (id)initMemory:(long long)a0 onCase:(unsigned long long)a1;

@end
