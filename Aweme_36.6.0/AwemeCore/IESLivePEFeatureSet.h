@class IESLiveThreadSafeDictionary, NSString;
@protocol IESLivePEFeatureSetDelegate;

@interface IESLivePEFeatureSet : NSObject <IESLivePEFeatureCollector>

@property (retain, nonatomic) IESLiveThreadSafeDictionary *featureDic;
@property (weak, nonatomic) id<IESLivePEFeatureSetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectFeature:(id)a0 withIntValue:(long long)a1;
- (void)collectFeature:(id)a0;
- (void)collectFeature:(id)a0 withBoolValue:(BOOL)a1;
- (void)collectFeature:(id)a0 withDoubleValue:(double)a1;
- (void)collectFeature:(id)a0 withStringValue:(id)a1;
- (void)featureChanged:(id)a0 withValue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)featureSet;
- (void)addFeature:(id)a0;

@end
