@class NSString;

@interface AWEStorageServiceStorageDelegate : NSObject <AWEStorageDelegate, AWEStorageServiceFileStorageDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willReadValueForKey:(id)a0 identifier:(id)a1;
- (void)didReadValueForKey:(id)a0 from:(long long)a1 identifier:(id)a2;
- (void)willDeserialization:(id)a0 key:(id)a1 identifier:(id)a2;
- (void)didDeserialization:(id)a0 deserializedValue:(id)a1 key:(id)a2 identifier:(id)a3;
- (void)didSetValue:(id)a0 key:(id)a1 error:(id)a2 identifier:(id)a3;
- (void)willWrite:(id)a0 key:(id)a1 identifier:(id)a2;
- (void)didWrite:(id)a0 key:(id)a1 identifier:(id)a2;
- (void)willSerialize:(id)a0 key:(id)a1 identifier:(id)a2;
- (void)didSerialize:(id)a0 key:(id)a1 encodedData:(id)a2 identifier:(id)a3;
- (void)willSetValue:(id)a0 key:(id)a1 domain:(id)a2 identifier:(id)a3;
- (void)willGetValueForKey:(id)a0 domain:(id)a1 identifier:(id)a2;
- (void)didGetValue:(id)a0 Key:(id)a1 error:(id)a2 identifier:(id)a3;
- (void)willWriteData:(id)a0 toPath:(id)a1 domain:(id)a2;
- (void)didWriteData:(id)a0 toPath:(id)a1 domain:(id)a2 error:(id)a3;
- (void)willReadDataFromPath:(id)a0 domain:(id)a1;
- (void)didReadData:(id)a0 Path:(id)a1 domain:(id)a2 error:(id)a3;

@end
