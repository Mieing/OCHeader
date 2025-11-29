@class NSString;

@interface AWEMusicStreamingImpl.LunaValidatePurchRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ orderID;
    void /* function */ externalErrorInfo;
}

@property (nonatomic, copy) NSString *orderID;
@property (nonatomic, readonly) long long settleMethod;
@property (nonatomic) BOOL isExternalSuccesss;
@property (nonatomic, copy) NSString *externalErrorInfo;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
