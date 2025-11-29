@class NSURL, AFHTTPResponseSerializer, AFHTTPRequestSerializer;
@protocol AFURLRequestSerialization, AFURLResponseSerialization;

@interface AFHTTPSessionManager : AFURLSessionManager <NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) AFHTTPRequestSerializer<AFURLRequestSerialization> *requestSerializer;
@property (retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer;

+ (BOOL)supportsSecureCoding;
+ (id)manager;

- (id)GET:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)HEAD:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)POST:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)POST:(id)a0 parameters:(id)a1 constructingBodyWithBlock:(id /* block */)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (id)PUT:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)PATCH:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)DELETE:(id)a0 parameters:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)initWithBaseURL:(id)a0 sessionConfiguration:(id)a1;
- (id)dataTaskWithHTTPMethod:(id)a0 URLString:(id)a1 parameters:(id)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)setResponseSerializer:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionConfiguration:(id)a0;

@end
