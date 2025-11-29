@class NSString, BU_AFMultipartBodyStream, NSMutableURLRequest;

@interface BU_AFStreamingMultipartFormData : NSObject <BU_AFMultipartFormData>

@property (copy, nonatomic) NSMutableURLRequest *request;
@property (nonatomic) unsigned long long stringEncoding;
@property (copy, nonatomic) NSString *boundary;
@property (retain, nonatomic) BU_AFMultipartBodyStream *bodyStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendPartWithFormData:(id)a0 name:(id)a1;
- (id)initWithURLRequest:(id)a0 stringEncoding:(unsigned long long)a1;
- (id)requestByFinalizingMultipartFormData;
- (void)appendPartWithHeaders:(id)a0 body:(id)a1;
- (void).cxx_destruct;

@end
