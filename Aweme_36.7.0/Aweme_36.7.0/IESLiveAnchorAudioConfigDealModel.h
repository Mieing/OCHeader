@class NSString, NSDictionary;

@interface IESLiveAnchorAudioConfigDealModel : NSObject <IESLiveAnchorStrategyFactorDealProtocol>

@property (nonatomic) int lastAudioBitrate;
@property (retain, nonatomic) NSString *lastProfile;
@property (copy, nonatomic) NSDictionary *strategyAudioConfig;
@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) id defaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithChangedFactorValue:(id)a0;
- (void)resetToDefaultValue;
- (void).cxx_destruct;

@end
