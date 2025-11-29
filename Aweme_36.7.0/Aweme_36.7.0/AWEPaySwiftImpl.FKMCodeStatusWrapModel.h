@class NSString, _TtC15AWEPaySwiftImpl14FKMServerExtra;

@interface AWEPaySwiftImpl.FKMCodeStatusWrapModel : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.FKMNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ msgHint;
    void /* function */ payStatusMapString;
    void /* function */ eventType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_payStatusMap;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *msgHint;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl14FKMServerExtra *serverExtra;
@property (nonatomic, copy) NSString *payStatusMapString;
@property (nonatomic, copy) NSString *eventType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
