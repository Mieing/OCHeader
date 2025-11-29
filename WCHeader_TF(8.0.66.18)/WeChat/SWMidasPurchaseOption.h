@class NSString;

@interface SWMidasPurchaseOption : NSObject {
    void /* unknown type, empty encoding */ metaTrackEventID;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldContinueWhenStorefrontChanged;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldShowHudTextWhenProcessing;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ usingStoreKit2Above15;
@property (nonatomic, readonly) NSString *metaTrackEventID;
@property (nonatomic) void /* unknown type, empty encoding */ shouldHideMidasSandboxAlert;
@property (nonatomic) void /* unknown type, empty encoding */ shouldStopPaymentWhenSameProductNeedReproviding;
@property (nonatomic) void /* unknown type, empty encoding */ purchaseTimeoutLimit;
@property (nonatomic) void /* unknown type, empty encoding */ fetchingProductTimeoutLimit;
@property (nonatomic, readonly) NSString *description;

- (id)initWithShouldContinueWhenStorefrontChanged:(BOOL)a0 shouldShowHudTextWhenProcessing:(BOOL)a1 usingStoreKit2Above15:(BOOL)a2 metaTrackEventID:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
