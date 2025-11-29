@class NSString;

@interface MMKindaLocationManagerImpl : NSObject <MMKindaLocationManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getEncryptInfo:(BOOL)a0 bReportSSid:(BOOL)a1;
- (id)getEncryptKey;
- (id)getCellInfo;

@end
