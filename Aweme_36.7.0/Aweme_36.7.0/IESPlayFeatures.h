@class IESHistoryFeedFeatureInfoHelper;

@interface IESPlayFeatures : NSObject

@property (nonatomic) long long maxHistoryCount;
@property (retain, nonatomic) IESHistoryFeedFeatureInfoHelper *featureInfoHelper;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (BOOL)fillTrackInfoWithModel:(id)a0 aid:(id)a1;
- (id)getRealValuesForKey:(id)a0 withAid:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
