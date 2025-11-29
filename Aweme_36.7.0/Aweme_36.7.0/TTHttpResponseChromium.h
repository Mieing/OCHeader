@class TTHttpResponseChromiumTimingInfo, NSString, TTCaseInsenstiveDictionary, NSURL, BDTuringCallbackInfo;

@interface TTHttpResponseChromium : TTHttpResponse <NSSecureCoding, NSCopying>

@property (retain) TTCaseInsenstiveDictionary *allHeaders;
@property long long httpStatusCode;
@property (retain) NSURL *httpURL;
@property (retain) BDTuringCallbackInfo *turingCallbackInfo;
@property (retain) TTHttpResponseChromiumTimingInfo *timingInfo;
@property (copy) NSString *requestLog;
@property BOOL isHttpInternalRedirect;
@property (copy) NSString *compressLog;

+ (BOOL)supportsSecureCoding;

- (id)timinginfo;
- (id)finalURL;
- (BOOL)isInternalRedirect;
- (id)turingCallbackinfo;
- (id)initWithURLFetcher:(const struct URLFetcher { void /* function */ **x0; } *)a0;
- (void)appendRequestLogWithDirectlyDispatchInfo:(BOOL)a0;
- (void)appendRequestLogWithCompressLog:(id)a0;
- (id)initWithRedirectedInfo:(id)a0 new_location:(id)a1 status_code:(int)a2 response_headers:(id)a3 is_internal_redirect:(BOOL)a4;
- (id)initWithRequestLog:(id)a0 andOriginalUrl:(id)a1;
- (void)setTuringCallbackRelatedInfo:(id)a0;
- (long long)statusCode;
- (void).cxx_destruct;
- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)MIMEType;
- (id)allHeaderFields;

@end
