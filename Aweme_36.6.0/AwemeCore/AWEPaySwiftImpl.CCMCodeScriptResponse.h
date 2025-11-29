@class NSString, _TtC15AWEPaySwiftImpl15CCMGatewayExtra;

@interface AWEPaySwiftImpl.CCMCodeScriptResponse : MTLModel <MTLJSONSerializing> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ scriptName;
    void /* function */ scriptContent;
    void /* function */ scriptVer;
    void /* function */ scriptLimit;
    void /* function */ scriptSign;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl15CCMGatewayExtra *gatewayExtra;
@property (nonatomic, copy) NSString *scriptName;
@property (nonatomic, copy) NSString *scriptContent;
@property (nonatomic, copy) NSString *scriptVer;
@property (nonatomic, copy) NSString *scriptLimit;
@property (nonatomic, copy) NSString *scriptSign;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
