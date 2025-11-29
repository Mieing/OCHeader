@class NSString;

@interface MidasWechatPayScoreSignContent : NSObject <MidasPayKit.MidasSignContent> {
    void /* unknown type, empty encoding */ ecOfferID;
    void /* unknown type, empty encoding */ ecSubOfferID;
    void /* unknown type, empty encoding */ contractMethod;
    void /* unknown type, empty encoding */ wxAppID;
    void /* unknown type, empty encoding */ customDomain;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) NSString *description;

- (id)initWithEcOfferID:(id)a0 ecSubOfferID:(id)a1 contractMethod:(long long)a2 wxAppID:(id)a3 customDomain:(id)a4;
- (BOOL)validate;
- (id)init;
- (void).cxx_destruct;

@end
