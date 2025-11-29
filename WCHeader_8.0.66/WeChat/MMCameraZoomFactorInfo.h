@class NSArray;

@interface MMCameraZoomFactorInfo : NSObject

@property (nonatomic) BOOL isWideSuppored;
@property (nonatomic) BOOL isUltraWideSuppored;
@property (nonatomic) BOOL isTelephotoSuppored;
@property (nonatomic) BOOL isDualWideSupported;
@property (nonatomic) BOOL isTripleSupported;
@property (nonatomic) double minZoomFactor;
@property (nonatomic) double maxZoomFactor;
@property (retain, nonatomic) NSArray *sortedAvailableZoomFactors;
@property (nonatomic) long long mainCameraZoomFactorIndex;
@property (nonatomic) double visualFactorScale;

- (id)description;
- (void).cxx_destruct;

@end
