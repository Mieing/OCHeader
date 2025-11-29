@interface TimeRecordWrap : NSObject

@property (nonatomic) struct timeval { long long tv_sec; int tv_usec; } m_msCurTime;

- (id)initWithTime:(struct timeval { long long x0; int x1; })a0;

@end
