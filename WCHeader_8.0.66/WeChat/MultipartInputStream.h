@class NSString, NSArray;
@protocol NSStreamDelegate;

@interface MultipartInputStream : NSInputStream <NSStreamDelegate> {
    NSArray *_streams;
    unsigned long long _currentStreamIndex;
    unsigned long long _currentReadPosition;
    unsigned long long _streamStatus;
    id<NSStreamDelegate> _delegate;
    id /* block */ _progressHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inputStreamWithStreams:(id)a0;
+ (id)inputStreamWithStreams:(id)a0 readProgressHandler:(id /* block */)a1;

- (id)initWithStreams:(id)a0;
- (id)initWithStreams:(id)a0 readProgressHandler:(id /* block */)a1;
- (void)initInternal:(id)a0 readProgressHandler:(id /* block */)a1;
- (void)open;
- (void)close;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)hasBytesAvailable;
- (unsigned long long)streamStatus;
- (id)streamError;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)notifyDelegateOfEvent:(unsigned long long)a0;
- (void)notifyReadProgress;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;

@end
