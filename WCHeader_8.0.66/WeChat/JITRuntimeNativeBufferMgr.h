@class NSMutableDictionary;

@interface JITRuntimeNativeBufferMgr : NSObject {
    unsigned long long _bufferIDSequence;
}

@property (retain, nonatomic) NSMutableDictionary *localBufferDic;
@property (retain, nonatomic) NSMutableDictionary *remoteBufferDic;

- (id)init;
- (id)createLocalNativeBuffer:(id)a0;
- (id)popLocalNativeBuffer:(id)a0;
- (id)getLocalNativeBuffer:(id)a0;
- (void)addRemoteNativeBuffer:(id)a0 buffer:(id)a1 allocType:(long long)a2;
- (id)getRemoteNativeBuffer:(id)a0;
- (void)removeRemoteNativeBuffer:(id)a0;
- (void)getLocalBufferFromXHR:(id)a0 baseUrl:(id)a1;
- (id)genBufferID;
- (void).cxx_destruct;

@end
