@class NSString, NSDictionary;

@interface AWENewScanImpl.SpecialQRCodeNetworkProvider : AWEDataLayerMantlePostMethodNetworkProvider {
    void /* unknown type, empty encoding */ schemeType;
    void /* function */ itemID;
    void /* unknown type, empty encoding */ useRebrandStyle;
    void /* function */ extraInfo;
}

@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, copy) NSDictionary *extraInfo;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
