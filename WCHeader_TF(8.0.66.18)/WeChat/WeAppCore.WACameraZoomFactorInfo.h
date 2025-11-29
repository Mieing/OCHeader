@class NSArray, NSString;

@interface WeAppCore.WACameraZoomFactorInfo : NSObject {
    void /* unknown type, empty encoding */ sortedAvailableZoomFactors;
}

@property (nonatomic) void /* unknown type, empty encoding */ isWideSuppored;
@property (nonatomic) void /* unknown type, empty encoding */ isUltraWideSuppored;
@property (nonatomic) void /* unknown type, empty encoding */ isTelephotoSuppored;
@property (nonatomic) void /* unknown type, empty encoding */ isDualWideSupported;
@property (nonatomic) void /* unknown type, empty encoding */ isTripleSupported;
@property (nonatomic) void /* unknown type, empty encoding */ minZoomFactor;
@property (nonatomic) void /* unknown type, empty encoding */ maxZoomFactor;
@property (nonatomic, copy) NSArray *sortedAvailableZoomFactors;
@property (nonatomic) void /* unknown type, empty encoding */ mainCameraZoomFactorIndex;
@property (nonatomic) void /* unknown type, empty encoding */ visualFactorScale;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
