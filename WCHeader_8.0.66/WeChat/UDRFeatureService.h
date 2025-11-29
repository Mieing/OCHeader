@class NSString;

@interface UDRFeatureService : MMUserService <MMServiceProtocol, IUdrResourceFeature>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)batchCheck:(id)a0 nameMap:(id)a1 qos:(int)a2 paramMap:(id)a3;
- (void)check:(id)a0 nameList:(id)a1 qos:(int)a2 paramMap:(id)a3;
- (void)specifiedCheck:(id)a0 name:(id)a1 version:(unsigned int)a2 extInfo:(id)a3;
- (void)registerProject:(id)a0 className:(id)a1;
- (id)getPostDir:(id)a0;
- (id)getAbsolutePath:(id)a0;
- (id)decodeVirtualPath:(id)a0;
- (void)clearAll;
- (id)getResource:(id)a0 name:(id)a1;
- (id)getResourceList:(id)a0;
- (id)getResourceDecrypt:(id)a0 name:(id)a1;

@end
