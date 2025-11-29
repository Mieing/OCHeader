@class NSString;

@interface CJSwiftIAPStore.CJSwiftIAPBizParamsModel : NSObject {
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ merchantId;
    void /* unknown type, empty encoding */ uid;
    void /* unknown type, empty encoding */ tradeNo;
    void /* unknown type, empty encoding */ outTradeNo;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ productId;
    void /* unknown type, empty encoding */ amount;
    void /* unknown type, empty encoding */ uidEncrypt;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ productUseCacheEnable;
    void /* unknown type, empty encoding */ bizExtraDic;
    void /* unknown type, empty encoding */ bizParamsDic;
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ jsonWebSignature;
    void /* unknown type, empty encoding */ nonce;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ keyIdentifier;
    void /* unknown type, empty encoding */ signature;
    void /* unknown type, empty encoding */ offerIdentifier;
    void /* unknown type, empty encoding */ applicationUsername;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
