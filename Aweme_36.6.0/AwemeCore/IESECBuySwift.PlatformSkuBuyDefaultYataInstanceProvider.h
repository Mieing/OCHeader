@interface IESECBuySwift.PlatformSkuBuyDefaultYataInstanceProvider : NSObject <YataDependencyProvider> {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ bizCode;
}

- (id)yata_sessionID;
- (id)yata_bizCode;
- (BOOL)yata_shouldUseFrontier;
- (BOOL)yata_disableCompress;
- (id)yata_body;
- (void).cxx_destruct;
- (id)init;

@end
