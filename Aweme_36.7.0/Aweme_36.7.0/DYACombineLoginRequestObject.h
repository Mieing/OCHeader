@class NSString;

@interface DYACombineLoginRequestObject : NSObject

@property (copy, nonatomic) NSString *secUID;
@property (copy, nonatomic) NSString *maskMobile;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *validateToken;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *providerAppID;
@property (nonatomic) BOOL fromRelation;
@property (copy, nonatomic) NSString *gwAuth;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)requestParams;

@end
