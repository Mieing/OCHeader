@class NSString;

@interface DolphinPollenFeatureProducer : NSObject <DolphinPollenPitayaFeatureFetchProtocol, DolphinPollenEncryptionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encryptFeatureString:(id)a0;
- (id)base64EncodeData:(id)a0;
- (id)produceFeatureWithBizName:(id)a0 memoryKey:(id)a1 includeFeatures:(id)a2 excludeFeatures:(id)a3;
- (id)init;
- (id)compressData:(id)a0;

@end
