@class NSDictionary, NSLock;
@protocol AWEStorageServiceKVInterface;

@interface AWESolariaPortraitProducerImpl : IESPortraitProducer

@property (copy, nonatomic) NSDictionary *portraits;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> portraitStorage;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSLock *storageLock;
@property (nonatomic) BOOL hasLoadData;

+ (id)sharedInstance;

- (void)processSolariaServerPortraits:(id)a0 isUpdate:(BOOL)a1;
- (void)doSetup;
- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (id)getPortraitElement:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)getPortraitElements;
- (id)unpackData:(id)a0 success:(BOOL *)a1;
- (id)getPortraitsFromData:(id)a0 isEncode:(BOOL)a1 success:(BOOL *)a2;
- (void)saveData:(id)a0 isEncode:(BOOL)a1 dataCount:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
