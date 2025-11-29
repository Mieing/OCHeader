@interface WrapTimeRecordData : MMObject

@property (nonatomic) unsigned long long m_caseID;
@property (nonatomic) struct timeval { long long tv_sec; int tv_usec; } m_msCurTime;

+ (id)recordDataWithTime:(struct timeval { long long x0; int x1; })a0 onCase:(unsigned long long)a1;

- (id)initWithTime:(struct timeval { long long x0; int x1; })a0 onCase:(unsigned long long)a1;

@end
