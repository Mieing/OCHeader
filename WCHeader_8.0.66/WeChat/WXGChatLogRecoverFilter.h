@class NSData, NSMutableDictionary;

@interface WXGChatLogRecoverFilter : NSObject

@property (retain, nonatomic) NSData *encryptData;
@property (retain, nonatomic) NSMutableDictionary *decryptorDict;
@property (retain, nonatomic) NSMutableDictionary *dataContainerDict;
@property (retain, nonatomic) NSMutableDictionary *startOffsetDict;
@property (retain, nonatomic) NSMutableDictionary *writeOffsetDict;

- (id)initWithEncryptData:(id)a0;
- (void)checkDataIntegrity;
- (unsigned long long)writeDataPush:(id)a0 toPath:(id)a1;
- (void).cxx_destruct;

@end
