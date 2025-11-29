@class BU_AFHTTPResponseSerializer, BU_AFHTTPRequestSerializer, NSURL, BU_AFSecurityPolicy;
@protocol BU_AFURLRequestSerialization, BU_AFURLResponseSerialization;

@interface BU_AFHTTPSessionManager : BU_AFURLSessionManager <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) BU_AFHTTPRequestSerializer<BU_AFURLRequestSerialization> *requestSerializer;
@property (retain, nonatomic) BU_AFHTTPResponseSerializer<BU_AFURLResponseSerialization> *responseSerializer;
@property (retain, nonatomic) BU_AFSecurityPolicy *securityPolicy;

+ (id)manager;

- (id)GET:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)POST:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)initWithBaseURL:(id)a0 sessionConfiguration:(id)a1;
- (id)dataTaskWithHTTPMethod:(id)a0 URLString:(id)a1 parameters:(id)a2 uploadProgress:(id /* block */)a3 downloadProgress:(id /* block */)a4 success:(id /* block */)a5 failure:(id /* block */)a6;
- (id)POST:(id)a0 parameters:(id)a1 progress:(id /* block */)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (id)GET:(id)a0 parameters:(id)a1 progress:(id /* block */)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)setResponseSerializer:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)description;
- (id)init;
- (void)setSecurityPolicy:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionConfiguration:(id)a0;

@end
