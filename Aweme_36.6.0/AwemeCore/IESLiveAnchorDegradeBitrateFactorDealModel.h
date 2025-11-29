@class NSDictionary, NSString;

@interface IESLiveAnchorDegradeBitrateFactorDealModel : NSObject <IESLiveAnchorStrategyFactorDealProtocol>

@property (retain, nonatomic) NSDictionary *defaultBitDict;
@property (nonatomic) long long enableSitiFromVpass;
@property (nonatomic) double bFrameBitrateRatioFromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioV1FromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioGe1080pFromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioLt1080pFromVpass;
@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) id defaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
