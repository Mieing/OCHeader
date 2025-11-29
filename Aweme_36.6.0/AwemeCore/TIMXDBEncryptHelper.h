@class TIMXDBEncryptConfig, TIMXSDKInstance;

@interface TIMXDBEncryptHelper : NSObject {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXDBEncryptConfig *config;

- (double)dbFileSize;
- (id)initWithRootObject:(id)a0 config:(id)a1;
- (id)databaseWithKey:(id)a0 userID:(id)a1;
- (void)removeDatabase;
- (double)encDBFileSize;
- (void).cxx_destruct;
- (float)fileSize:(id)a0;

@end
