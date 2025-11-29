@interface TTSampleBufferLayerPool : NSObject {
    struct Mutex { struct { char opaque[64]; } mutex; } mMutex;
    struct AVQueue<com::ss::ttm::utils::SBDLBuffer *> { BOOL mWaited; BOOL mForceWakeup; int mWaitCount; BOOL mEnableWaitCount; struct AVNode *mCaches; struct AVNode *mCacheEnd; struct AVNode *mNodes; struct AVNode *mHead; struct AVNode *mTail; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mMutex; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } mCond; int mMaxSize; int mCacheSize; int mFreezeSize; int mState; int mSize; struct String { union { unsigned char mBytes[24]; char mSmall[24]; struct Layout { char *mData; unsigned long long mSize; unsigned long long mCap; } mML; } ; } mName; BOOL mEnableAVListStop2; struct AVBufferCallback *mCallback; int mFlag; BOOL mEnableCallbackRef; BOOL mRefactorCallbackRef; struct Strong<com::ss::ttm::AVBufferCallback> { void /* function */ **_vptr$Strong; unsigned long long mBase; } mCallBackRef; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } mDisableCallbackRef; } mQueue;
    int mMaximumSize;
}

+ (id)sharedPool;

- (void)pushbackSBDLayer:(id)a0;
- (id)getSBDLayer;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id).cxx_construct;

@end
