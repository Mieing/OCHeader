@class _TtC15AWEPaySwiftImpl14FKMServerExtra, NSString, _TtC15AWEPaySwiftImpl31FKMActivateRetainPopupInfoModel, _TtC15AWEPaySwiftImpl29FKMPreApplyPlacementInfoModel;

@interface AWEPaySwiftImpl.FKMPreActivateModel : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.FKMNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ msgHint;
    void /* function */ validStatusRaw;
    void /* function */ retainToken;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *msgHint;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl14FKMServerExtra *serverExtra;
@property (nonatomic, copy) NSString *validStatusRaw;
@property (nonatomic, copy) NSString *retainToken;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl31FKMActivateRetainPopupInfoModel *retainPopupInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl29FKMPreApplyPlacementInfoModel *placementInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
