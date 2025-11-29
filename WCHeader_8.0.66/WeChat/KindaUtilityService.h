@class NSString;

@interface KindaUtilityService : NSObject <MMKUtilityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)qmfCardStrLimitLen:(id)a0 length:(int)a1;
- (id)get3DesEncryptResult:(id)a0;

@end
