@class NSData;

@interface WCFinderSyncKeyBufHandler : NSObject

@property (retain, nonatomic) NSData *keyBuf;
@property (copy, nonatomic) id /* block */ bufferSaveBlock;
@property (copy, nonatomic) id /* block */ bufferLoadBlock;

+ (id)handlerForFinderSync;
+ (id)handlerForLbsLifeSync;

- (id)initWithBufferSaver:(id /* block */)a0 bufferLoader:(id /* block */)a1;
- (id)getKeyBuffer;
- (id)getKeyBufferForPB;
- (id)getKeyBufferMD5;
- (void)mergeKeyBuffer:(id)a0;
- (void)reinitKeyBuffer;
- (void)reinitMemoryKeyBuffer;
- (void).cxx_destruct;

@end
