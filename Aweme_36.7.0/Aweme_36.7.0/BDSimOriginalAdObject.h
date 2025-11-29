@class NSNumber;
@protocol BDSimAdSplashModel;

@interface BDSimOriginalAdObject : NSObject

@property (retain, nonatomic) NSNumber *adVolumePredict;
@property (retain, nonatomic) id<BDSimAdSplashModel> splashInfo;

- (void).cxx_destruct;

@end
