@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface LCIHelper : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (nonatomic) long long appStatus;
@property (retain, nonatomic) NSMutableDictionary *listenerList;
@property (retain, nonatomic) NSMutableDictionary *listenerProxyList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ihelperQueue;
@property (nonatomic) double cpuFreq;

+ (struct __CVBuffer { } *)RBGBuffereCopyWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (struct __CVBuffer { } *)YUVBufferCopyWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (struct __CVBuffer { } *)copyPixelBufferFrom:(struct __CVBuffer { } *)a0;
+ (long long)millisecondFrom:(long long)a0;
+ (id)sharedInstance;

- (id)convertToJsonData:(id)a0;
- (void)notifyListenerNewStatus:(long long)a0;
- (id)convertDataToHexStr:(id)a0;
- (struct __CVBuffer { } *)createDarkFrameWithFrameSize:(struct CGSize { double x0; double x1; })a0 enableLeakFix:(BOOL)a1;
- (void)registerBecomeActiveNotify;
- (void)registerEnterBackgroundNotify;
- (void)registerEnterForegroundNotify;
- (void)registerResignActiveNotify;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
