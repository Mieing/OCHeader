@class NSMutableDictionary, NSString, NSDictionary, NSData, NSURL, NSDate, NSMutableArray;
@protocol GCDWebServerBodyWriter;

@interface GCDWebServerRequest : NSObject <GCDWebServerBodyWriter> {
    BOOL _opened;
    NSMutableArray *_decoders;
    NSMutableDictionary *_attributes;
    id<GCDWebServerBodyWriter> _writer;
}

@property (readonly, nonatomic) BOOL usesChunkedTransferEncoding;
@property (retain, nonatomic) NSData *localAddressData;
@property (retain, nonatomic) NSData *remoteAddressData;
@property (readonly, nonatomic) NSString *method;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSDictionary *headers;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSDictionary *query;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) unsigned long long contentLength;
@property (readonly, nonatomic) NSDate *ifModifiedSince;
@property (readonly, nonatomic) NSString *ifNoneMatch;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } byteRange;
@property (readonly, nonatomic) BOOL acceptsGzipContentEncoding;
@property (readonly, nonatomic) NSString *localAddressString;
@property (readonly, nonatomic) NSString *remoteAddressString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMethod:(id)a0 url:(id)a1 headers:(id)a2 path:(id)a3 query:(id)a4;
- (BOOL)hasBody;
- (BOOL)hasByteRange;
- (id)attributeForKey:(id)a0;
- (BOOL)open:(id *)a0;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (BOOL)close:(id *)a0;
- (void)prepareForWriting;
- (BOOL)performOpen:(id *)a0;
- (BOOL)performWriteData:(id)a0 error:(id *)a1;
- (BOOL)performClose:(id *)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
