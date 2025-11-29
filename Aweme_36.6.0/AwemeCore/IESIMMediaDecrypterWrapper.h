@class NSString, MediaDecrypter;

@interface IESIMMediaDecrypterWrapper : NSObject <IESIMMediaDecrypterProtocol>

@property (retain, nonatomic) MediaDecrypter *mediaDecrypter;
@property (readonly, copy, nonatomic) NSString *inputPath;
@property (readonly, copy, nonatomic) NSString *outputPath;
@property (readonly, copy, nonatomic) NSString *decryptionKey;
@property (readonly, copy, nonatomic) NSString *encryptionKey;
@property (readonly, nonatomic) long long progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInputPath:(id)a0 outputPath:(id)a1 decryptionKey:(id)a2;
- (id)initWithInputPath2:(id)a0 outputPath:(id)a1 encryptionKey:(id)a2;
- (id)initWithInputPath:(id)a0;
- (void)close;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)getMetadata;

@end
