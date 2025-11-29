@class NSString, NSMutableDictionary, NSDate, NSMutableArray;
@protocol GCDWebServerBodyReader;

@interface GCDWebServerResponse : NSObject <GCDWebServerBodyReader> {
    BOOL _chunked;
    BOOL _opened;
    NSMutableArray *_encoders;
    id<GCDWebServerBodyReader> _reader;
}

@property (readonly, nonatomic) NSMutableDictionary *additionalHeaders;
@property (readonly, nonatomic) BOOL usesChunkedTransferEncoding;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) unsigned long long contentLength;
@property (nonatomic) long long statusCode;
@property (nonatomic) unsigned long long cacheControlMaxAge;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *eTag;
@property (nonatomic, getter=isGZipContentEncodingEnabled) BOOL gzipContentEncodingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithStatusCode:(long long)a0;
+ (id)responseWithRedirect:(id)a0 permanent:(BOOL)a1;
+ (id)response;

- (id)initWithStatusCode:(long long)a0;
- (id)initWithRedirect:(id)a0 permanent:(BOOL)a1;
- (id)init;
- (void)setValue:(id)a0 forAdditionalHeader:(id)a1;
- (BOOL)hasBody;
- (BOOL)open:(id *)a0;
- (id)readData:(id *)a0;
- (void)close;
- (void)prepareForReading;
- (BOOL)performOpen:(id *)a0;
- (void)performReadDataWithCompletion:(id /* block */)a0;
- (void)performClose;
- (void).cxx_destruct;

@end
