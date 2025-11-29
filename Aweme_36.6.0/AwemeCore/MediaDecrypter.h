@class NSString;

@interface MediaDecrypter : NSObject {
    void *_decrypter;
    struct AV_APPLICATION { void *x0; void /* function */ *x1; void /* function */ *x2; } *_application;
}

@property (copy, nonatomic) NSString *inputPath;
@property (copy, nonatomic) NSString *outputPath;
@property (copy, nonatomic) NSString *decryptionKey;
@property (copy, nonatomic) NSString *encryptionKey;
@property (nonatomic) long long progress;
@property (nonatomic) BOOL isRemux;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)handleNotify:(id)a0;
- (id)initWithInputPath:(id)a0 outputPath:(id)a1 decryptionKey:(id)a2;
- (id)initWithInputPath2:(id)a0 outputPath:(id)a1 encryptionKey:(id)a2;
- (id)initWithInputPath:(id)a0;
- (void)close;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (void)create;
- (void)dealloc;
- (id)getMetadata;

@end
