@class NSArray;

@interface WeChat.MMResourceTarget : NSObject

@property (class, nonatomic, readonly) NSArray *autoUpdateTypeArray;

+ (BOOL)savedAsDecryptFor:(unsigned int)a0;
+ (BOOL)needECCVerifiedFor:(unsigned int)a0;
+ (BOOL)clientVersionDependentFor:(unsigned int)a0;

- (id)init;
- (void).cxx_destruct;

@end
