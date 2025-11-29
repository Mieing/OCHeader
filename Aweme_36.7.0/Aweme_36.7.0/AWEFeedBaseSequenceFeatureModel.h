@class AWEAwemeModel;

@interface AWEFeedBaseSequenceFeatureModel : AWESequenceFeatureModel

@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (id)internalFeatures;

- (id)featureForKey:(id)a0 extra:(id)a1;
- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
