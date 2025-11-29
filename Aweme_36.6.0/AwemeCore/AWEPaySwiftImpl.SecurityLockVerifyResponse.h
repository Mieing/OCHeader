@class NSString, _TtC15AWEPaySwiftImpl23SecurityLockServerExtra;

@interface AWEPaySwiftImpl.SecurityLockVerifyResponse : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.SecurityLockNetworkResponse> {
    void /* function */ code;
    void /* function */ msg;
    void /* function */ msgHint;
    void /* function */ verifyID;
    void /* function */ verifyToken;
    void /* function */ decisionID;
}

@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, copy) NSString *msgHint;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl23SecurityLockServerExtra *serverExtra;
@property (nonatomic, copy) NSString *verifyID;
@property (nonatomic, copy) NSString *verifyToken;
@property (nonatomic, copy) NSString *decisionID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
