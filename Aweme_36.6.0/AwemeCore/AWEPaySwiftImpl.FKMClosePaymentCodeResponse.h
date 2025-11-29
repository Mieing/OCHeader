@class NSString, _TtC15AWEPaySwiftImpl14FKMServerExtra;

@interface AWEPaySwiftImpl.FKMClosePaymentCodeResponse : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.FKMNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ msgHint;
    void /* function */ questURL;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *msgHint;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl14FKMServerExtra *serverExtra;
@property (nonatomic, copy) NSString *questURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
