@class NSString, _TtC15AWEPaySwiftImpl14FKMServerExtra;

@interface AWEPaySwiftImpl.FKMApplyCodeValueResponse : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.FKMNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ msgHint;
    void /* function */ validStatusString;
    void /* function */ encryptedOnlineCode;
    void /* function */ encryptedOfflineCode;
    void /* function */ encryptedBatchCode;
    void /* function */ serverOfflineCodeModeRawValue;
    void /* unknown type, empty encoding */ offlineCode;
    void /* unknown type, empty encoding */ batchCode;
    void /* unknown type, empty encoding */ onlineCode;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *msgHint;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl14FKMServerExtra *serverExtra;
@property (nonatomic, copy) NSString *validStatusString;
@property (nonatomic, copy) NSString *encryptedOnlineCode;
@property (nonatomic, copy) NSString *encryptedOfflineCode;
@property (nonatomic, copy) NSString *encryptedBatchCode;
@property (nonatomic, copy) NSString *serverOfflineCodeModeRawValue;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
