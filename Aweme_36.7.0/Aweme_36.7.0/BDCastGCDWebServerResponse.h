@class NSString, NSDictionary, NSDate, NSMutableArray;
@protocol BDCastGCDWebServerBodyReader;

@interface BDCastGCDWebServerResponse : NSObject <BDCastGCDWebServerBodyReader> {
    BOOL _opened;
    NSMutableArray *_encoders;
    id<BDCastGCDWebServerBodyReader> _reader;
}

@property (readonly, nonatomic) NSDictionary *additionalHeaders;
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

+ (id)responseWithRedirect:(id)a0 permanent:(BOOL)a1;
+ (id)response;
+ (id)responseWithStatusCode:(long long)a0;

- (void)setValue:(id)a0 forAdditionalHeader:(id)a1;
- (void)prepareForReading;
- (void)performClose:(id)a0;
- (void)performReadDataWithCompletion:(id /* block */)a0;
- (id)initWithRedirect:(id)a0 permanent:(BOOL)a1;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasBody;
- (BOOL)open:(id *)a0;
- (id)readData:(id *)a0;
- (id)initWithStatusCode:(long long)a0;
- (BOOL)performOpen:(id *)a0;

@end
