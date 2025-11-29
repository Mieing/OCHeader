@class NSEnumerator, NSString, NSError, AFHTTPBodyPart, NSOutputStream, NSInputStream, NSMutableArray, NSMutableData;
@protocol NSStreamDelegate;

@interface AFMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate> {
    id<NSStreamDelegate> delegate;
    unsigned long long streamStatus;
    NSError *streamError;
}

@property (nonatomic) unsigned long long stringEncoding;
@property (retain, nonatomic) NSMutableArray *HTTPBodyParts;
@property (retain, nonatomic) NSEnumerator *HTTPBodyPartEnumerator;
@property (retain, nonatomic) AFHTTPBodyPart *currentHTTPBodyPart;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSMutableData *buffer;
@property (nonatomic) unsigned long long numberOfBytesInPacket;
@property (nonatomic) double delay;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) unsigned long long contentLength;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStringEncoding:(unsigned long long)a0;
- (void)appendHTTPBodyPart:(id)a0;
- (void)setInitialAndFinalBoundaries;
- (void)setStreamStatus:(unsigned long long)a0;
- (void)close;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)open;
- (id)propertyForKey:(id)a0;
- (BOOL)hasBytesAvailable;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)delegate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDelegate:(id)a0;
- (void)setStreamError:(id)a0;

@end
