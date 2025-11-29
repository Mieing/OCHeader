@class NSString, _TtC15AWEPaySwiftImpl14FKMServerExtra;

@interface AWEPaySwiftImpl.FKMValidateIndexResponse : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.FKMNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ msgHint;
    void /* function */ validStatusString;
    void /* function */ offlineCodeEncryptedString;
    void /* unknown type, empty encoding */ offlineCodeModel;
    void /* function */ batchCodeEncryptedString;
    void /* unknown type, empty encoding */ batchCodeModel;
    void /* function */ serverOfflineCodeModeRawValue;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *msgHint;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl14FKMServerExtra *serverExtra;
@property (nonatomic, copy) NSString *validStatusString;
@property (nonatomic) BOOL indexChange;
@property (nonatomic, copy) NSString *offlineCodeEncryptedString;
@property (nonatomic, copy) NSString *batchCodeEncryptedString;
@property (nonatomic, copy) NSString *serverOfflineCodeModeRawValue;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
