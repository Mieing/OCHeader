@class IESLiveThreadSafeDictionary, NSString, HTSLiveStrategyFeatureInfo;
@protocol HTSKVStore;

@interface IESLivePEFeatureStorage : NSObject <IESLivePEFeatureStorage> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _data_rwlock;
}

@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *innerPatternDic;
@property (copy, nonatomic) NSString *verificationKey;
@property (retain, nonatomic) HTSLiveStrategyFeatureInfo *featureInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFeatures:(id)a0;
- (id)featureExtra;
- (id)featureDictionary;
- (id)featurePatterns;
- (id)readFeaturesWithKey:(id)a0;
- (void)writeFeatures:(id)a0 toKey:(id)a1;
- (void)addLocalPatterns:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
