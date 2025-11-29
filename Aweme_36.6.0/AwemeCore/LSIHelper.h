@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface LSIHelper : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (nonatomic) long long appStatus;
@property (retain, nonatomic) NSMutableDictionary *listenerList;
@property (retain, nonatomic) NSMutableDictionary *listenerProxyList;
@property (retain, nonatomic) NSMutableDictionary *linkEventListenerList;
@property (retain, nonatomic) NSMutableDictionary *linkEventListenerProxyList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ihelperQueue;
@property (nonatomic) BOOL useMilliSecondPri;

+ (void)swizzleForClass:(Class)a0 oriSEL:(SEL)a1 fromClass:(Class)a2 newSEL:(SEL)a3;
+ (struct __CVBuffer { } *)generateCVPixelBufferWithFmt:(unsigned int)a0 yBuffer:(void *)a1 uBuffer:(void *)a2 vBuffer:(void *)a3 yStride:(int)a4 uStride:(int)a5 vStride:(int)a6 width:(int)a7 height:(int)a8;
+ (BOOL)shouldDropLiveCoreCameraOutput;
+ (void)registerAppStatusNofity:(id)a0 withCallback:(id /* block */)a1;
+ (void)registerLinkEventNofity:(id)a0 withCallback:(id /* block */)a1;
+ (BOOL)closeEncode;
+ (BOOL)isBufferListInvalid:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
+ (void)swizzleForClass:(Class)a0 oriSEL:(SEL)a1 newSEL:(SEL)a2;
+ (struct __CVBuffer { } *)imageBufferFromImage:(id)a0;
+ (void)setShouldDropLiveCoreCameraOutput:(id)a0;
+ (void)setCloseCapture:(id)a0;
+ (void)setClosePreview:(id)a0;
+ (void)setCloseEffect:(id)a0;
+ (BOOL)closeEffect;
+ (void)setCloseEncode:(id)a0;
+ (void)setClosePushStream:(id)a0;
+ (void)cleanTestStatus;
+ (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)createBufferListWith:(unsigned int)a0 size:(unsigned int)a1 channel:(unsigned int)a2;
+ (void)copyBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 src:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1;
+ (void)destroyBufferList:(struct AudioBufferList **)a0;
+ (void)enableUseMilliSecondPri:(BOOL)a0;
+ (id)setPriorityForUrl:(id)a0;
+ (BOOL)closePushStream;
+ (id)addQueryForURL:(id)a0 withName:(id)a1 value:(id)a2;
+ (BOOL)closeCapture;
+ (id)sharedInstance;
+ (BOOL)closePreview;

- (void)notifyListenerNewStatus:(long long)a0;
- (void)registerAppStatusNofity:(id)a0 withCallback:(id /* block */)a1;
- (void)registerLinkEventNofity:(id)a0 withCallback:(id /* block */)a1;
- (void)notifyListenerNewEvent:(long long)a0 value:(id)a1;
- (void)registerBecomeActiveNotify;
- (void)registerEnterBackgroundNotify;
- (void)registerEnterForegroundNotify;
- (void)registerResignActiveNotify;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
