@class NSArray, NSDictionary, NSString, NSMutableArray;
@protocol IESLivePlayerVideoQualityAdaptiveProtocol;

@interface IESLivePlayerVideoQualityAdaptive : NSObject

@property (copy, nonatomic) NSDictionary *streamDataDict;
@property (retain, nonatomic) NSMutableArray *sdkKeys;
@property (nonatomic) float bestVqForStrategy;
@property (nonatomic) float upQualityBufferForStrategy;
@property (nonatomic) float downQualityBufferForStrategy;
@property (retain, nonatomic) NSArray *onlineVQScoreAllLevels;
@property (nonatomic) long long bmfSrScale;
@property (nonatomic) BOOL isOpenedSr;
@property (retain, nonatomic) NSString *currentSdkKey;
@property (retain, nonatomic) NSString *currentStreamData;
@property (weak, nonatomic) id<IESLivePlayerVideoQualityAdaptiveProtocol> delegate;

- (void)setVideoQualityAdaptiveStrategy:(id)a0;
- (void)setRealTimeVideoQualityInfo:(id)a0;
- (void)resetVideoQualityAdaptiveStrategy;
- (void)parseStreamDataInfo:(id)a0;
- (BOOL)isEnableUseBMFSharp:(id)a0;
- (id)getSuggestSdkKeyWithCurrentSdkKey:(id)a0 srOpened:(BOOL)a1 sharped:(BOOL)a2 srScale:(long long)a3;
- (id)convertSRTypeFromIndex:(long long)a0;
- (id)findHigherLevelSDKKey:(id)a0 currentSdkKey:(id)a1;
- (id)findLowNextLevelSDKKey:(id)a0 currentSdkKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
