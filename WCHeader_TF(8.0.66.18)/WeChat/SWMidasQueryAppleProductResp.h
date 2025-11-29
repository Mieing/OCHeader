@class NSSet, NSString;

@interface SWMidasQueryAppleProductResp : NSObject {
    void /* unknown type, empty encoding */ productInfos;
    void /* unknown type, empty encoding */ invalidProductIDs;
}

@property (nonatomic, readonly) NSSet *productInfos;
@property (nonatomic, readonly) NSSet *invalidProductIDs;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
