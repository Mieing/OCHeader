@class NSString;

@interface QMStreamEncrypt : NSObject {
    struct IStreamEncryptAndDecrypt { void /* function */ **x0; } *_streamEncryptAndDecrypt;
}

@property (readonly, nonatomic) NSString *ekey;
@property (readonly, nonatomic) long long tailSize;

+ (BOOL)fileIsExistWithPath:(id)a0;
+ (BOOL)writeEKeyToEndOfFile:(id)a0 ekey:(id)a1;
+ (struct IStreamEncryptAndDecrypt { void /* function */ **x0; } *)createStreamEncryptIns:(id)a0;

- (id)initWithEKey:(id)a0;
- (id)initWithFilePath:(id)a0;
- (void)dealloc;
- (void)streamDecrypt:(char *)a0 offset:(unsigned long long)a1 size:(int)a2;
- (void)streamEncrypt:(char *)a0 offset:(unsigned long long)a1 size:(int)a2;
- (BOOL)writeEKeyToEndOfFile:(id)a0;
- (BOOL)readEKeyFromFileHandle:(id)a0;
- (BOOL)checkFileHeader:(id)a0;
- (BOOL)isValidFile:(id)a0;
- (void).cxx_destruct;

@end
