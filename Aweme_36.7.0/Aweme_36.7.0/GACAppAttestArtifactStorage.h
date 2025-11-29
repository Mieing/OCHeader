@class NSString, GULKeychainStorage;

@interface GACAppAttestArtifactStorage : NSObject <GACAppAttestArtifactStorageProtocol>

@property (readonly, nonatomic) NSString *keySuffix;
@property (readonly, nonatomic) GULKeychainStorage *keychainStorage;
@property (readonly, nonatomic) NSString *accessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithKeySuffix:(id)a0 keychainStorage:(id)a1 accessGroup:(id)a2;
- (id)artifactKey;
- (id)storeArtifact:(id)a0 forKey:(id)a1;
- (id)setArtifact:(id)a0 forKey:(id)a1;
- (id)getArtifactForKey:(id)a0;
- (id)initWithKeySuffix:(id)a0 accessGroup:(id)a1;
- (void).cxx_destruct;

@end
