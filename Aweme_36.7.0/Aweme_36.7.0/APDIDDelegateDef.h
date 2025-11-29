@class NSString;

@interface APDIDDelegateDef : NSObject <APDIDProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSysInfoByName:(char *)a0;
- (id)getAppVersion;
- (id)getTokenResult;
- (id)getTokenResultFromCache;
- (id)getSimpleDeviceInfo;
- (id)verifyStringNotNil:(id)a0;
- (id)getAppName;
- (id)getOSVersion;

@end
