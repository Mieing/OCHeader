@class NSString;

@interface AWETeenTimeLockService : HTSService <AWETeenTimeLockService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)todayTimeLockLimit;
- (unsigned long long)weekendTimeLockLimit;
- (unsigned long long)weekdayTimeLockLimit;

@end
