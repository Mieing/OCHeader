@class NSNumber, NSString;

@interface IESLiveAnchorBitrateScaleFactorDealModel : NSObject <IESLiveAnchorStrategyFactorDealProtocol>

@property (retain, nonatomic) NSNumber *defaultBitrateScale;
@property (nonatomic) long long defaultBitrate;
@property (nonatomic) long long minBitrate;
@property (nonatomic) long long maxBitrate;
@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) id defaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
