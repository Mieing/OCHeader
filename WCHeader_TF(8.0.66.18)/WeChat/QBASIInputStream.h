@class NSString, NSInputStream, QBASIHTTPRequest;
@protocol NSStreamDelegate;

@interface QBASIInputStream : NSObject <NSStreamDelegate> {
    NSInputStream *stream;
    id<NSStreamDelegate> delegate;
    void /* function */ *copiedCallback;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } copiedContext;
    unsigned long long requestedEvents;
}

@property (nonatomic) QBASIHTTPRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)inputStreamWithFileAtPath:(id)a0 request:(id)a1;
+ (id)inputStreamWithData:(id)a0 request:(id)a1;
+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (id)initWithInputStream:(id)a0;
- (void)dealloc;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (unsigned long long)streamStatus;
- (id)streamError;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
