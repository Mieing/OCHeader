@class NSRecursiveLock, NSHTTPURLResponse, AFHTTPResponseSerializer, NSError;
@protocol AFURLResponseSerialization;

@interface AFHTTPRequestOperation : AFURLConnectionOperation

@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) id responseObject;
@property (retain, nonatomic) NSError *responseSerializationError;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer;

+ (BOOL)supportsSecureCoding;

- (void)setCompletionBlockWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)pause;
- (id)error;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
