@class NSDictionary, NSString, NSInputStream;

@interface BU_AFHTTPBodyPart : NSObject <NSCopying> {
    int _phase;
    unsigned long long _phaseReadOffset;
}

@property (nonatomic) unsigned long long stringEncoding;
@property (retain, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *boundary;
@property (retain, nonatomic) id body;
@property (nonatomic) unsigned long long bodyContentLength;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (nonatomic) BOOL hasInitialBoundary;
@property (nonatomic) BOOL hasFinalBoundary;
@property (readonly, nonatomic, getter=hasBytesAvailable) BOOL bytesAvailable;
@property (readonly, nonatomic) unsigned long long contentLength;

- (BOOL)transitionToNextPhase;
- (id)stringForHeaders;
- (long long)readData:(id)a0 intoBuffer:(char *)a1 maxLength:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
