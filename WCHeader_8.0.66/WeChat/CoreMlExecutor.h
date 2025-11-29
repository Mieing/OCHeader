@class MLModel, NSString;

@interface CoreMlExecutor : NSObject

@property (retain) MLModel *model;
@property (retain) NSString *mlModelFilePath;
@property (retain) NSString *compiledModelFilePath;
@property (readonly, nonatomic) int coreMlVersion;

- (BOOL)invokeWithInputs:(const struct vector<TensorData, std::__1::allocator<TensorData> > { struct TensorData *x0; struct TensorData *x1; struct __compressed_pair<TensorData *, std::__1::allocator<TensorData> > { struct TensorData *x0; } x2; } *)a0 outputs:(const struct vector<TensorData, std::__1::allocator<TensorData> > { struct TensorData *x0; struct TensorData *x1; struct __compressed_pair<TensorData *, std::__1::allocator<TensorData> > { struct TensorData *x0; } x2; } *)a1;
- (BOOL)cleanup;
- (id)saveModel:(struct Model { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct ModelDescription *x2; int x3; BOOL x4; union TypeUnion { struct PipelineClassifier *x0; struct PipelineRegressor *x1; struct Pipeline *x2; struct GLMRegressor *x3; struct SupportVectorRegressor *x4; struct TreeEnsembleRegressor *x5; struct NeuralNetworkRegressor *x6; struct BayesianProbitRegressor *x7; struct GLMClassifier *x8; struct SupportVectorClassifier *x9; struct TreeEnsembleClassifier *x10; struct NeuralNetworkClassifier *x11; struct KNearestNeighborsClassifier *x12; struct NeuralNetwork *x13; struct ItemSimilarityRecommender *x14; struct CustomModel *x15; struct LinkedModel *x16; struct OneHotEncoder *x17; struct Imputer *x18; struct FeatureVectorizer *x19; struct DictVectorizer *x20; struct Scaler *x21; struct CategoricalMapping *x22; struct Normalizer *x23; struct ArrayFeatureExtractor *x24; struct NonMaximumSuppression *x25; struct Identity *x26; struct TextClassifier *x27; struct WordTagger *x28; struct VisionFeaturePrint *x29; struct SoundAnalysisPreprocessing *x30; struct Gazetteer *x31; struct WordEmbedding *x32; } x5; struct CachedSize { struct atomic<int> { _Atomic int x0; } x0; } x6; unsigned int x7[1]; } *)a0;
- (BOOL)build:(id)a0;
- (void).cxx_destruct;

@end
