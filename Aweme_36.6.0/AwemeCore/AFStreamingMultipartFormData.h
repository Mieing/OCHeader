@class NSString, AFMultipartBodyStream, NSMutableURLRequest;

@interface AFStreamingMultipartFormData : NSObject <AFMultipartFormData>

@property (copy, nonatomic) NSMutableURLRequest *request;
@property (nonatomic) unsigned long long stringEncoding;
@property (copy, nonatomic) NSString *boundary;
@property (retain, nonatomic) AFMultipartBodyStream *bodyStream;

- (void)appendPartWithFileData:(id)a0 name:(id)a1 fileName:(id)a2 mimeType:(id)a3;
- (void)appendPartWithFormData:(id)a0 name:(id)a1;
- (id)initWithURLRequest:(id)a0 stringEncoding:(unsigned long long)a1;
- (id)requestByFinalizingMultipartFormData;
- (BOOL)appendPartWithFileURL:(id)a0 name:(id)a1 fileName:(id)a2 mimeType:(id)a3 error:(id *)a4;
- (void)appendPartWithHeaders:(id)a0 body:(id)a1;
- (BOOL)appendPartWithFileURL:(id)a0 name:(id)a1 error:(id *)a2;
- (void)appendPartWithInputStream:(id)a0 name:(id)a1 fileName:(id)a2 length:(long long)a3 mimeType:(id)a4;
- (void)throttleBandwidthWithPacketSize:(unsigned long long)a0 delay:(double)a1;
- (void).cxx_destruct;

@end
