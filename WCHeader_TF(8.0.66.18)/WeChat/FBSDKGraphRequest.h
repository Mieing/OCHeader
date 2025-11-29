@class NSString, NSDictionary;

@interface FBSDKGraphRequest : NSObject

@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *HTTPMethod;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly, copy, nonatomic) NSString *tokenString;
@property (readonly, copy, nonatomic) NSString *graphPath;
@property (readonly, copy, nonatomic) NSString *version;

+ (BOOL)isAttachment:(id)a0;
+ (id)serializeURL:(id)a0 params:(id)a1;
+ (id)serializeURL:(id)a0 params:(id)a1 httpMethod:(id)a2;
+ (id)serializeURL:(id)a0 params:(id)a1 httpMethod:(id)a2 forBatch:(BOOL)a3;
+ (id)preprocessParams:(id)a0;

- (id)initWithGraphPath:(id)a0;
- (id)initWithGraphPath:(id)a0 HTTPMethod:(id)a1;
- (id)initWithGraphPath:(id)a0 parameters:(id)a1;
- (id)initWithGraphPath:(id)a0 parameters:(id)a1 HTTPMethod:(id)a2;
- (id)initWithGraphPath:(id)a0 parameters:(id)a1 flags:(unsigned long long)a2;
- (id)initWithGraphPath:(id)a0 parameters:(id)a1 tokenString:(id)a2 HTTPMethod:(id)a3 flags:(unsigned long long)a4;
- (id)initWithGraphPath:(id)a0 parameters:(id)a1 tokenString:(id)a2 version:(id)a3 HTTPMethod:(id)a4;
- (BOOL)isGraphErrorRecoveryDisabled;
- (void)setGraphErrorRecoveryDisabled:(BOOL)a0;
- (BOOL)hasAttachments;
- (id)startWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;

@end
