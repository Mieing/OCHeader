@class NSString, NSData, NSDictionary;

@interface FinderTfLiteMultiClassifyPredict : NSObject

@property (retain, nonatomic) NSString *modelPath;
@property (nonatomic) struct TfLiteInterpreter { } *tflite;
@property (nonatomic) struct TfLiteModel { } *model;
@property (retain, nonatomic) NSData *modelData;
@property (retain, nonatomic) NSDictionary *cachedResult;
@property (nonatomic) double lastPredictTime;

- (id)initWithModelPath:(id)a0;
- (id)predictWithFeatures:(id)a0 outputIndex:(id)a1;
- (BOOL)loadModel;
- (BOOL)inputsCheckWithFeatures:(id)a0;
- (BOOL)outputsCheckWithOutput:(float *)a0 size:(long long)a1;
- (void)releaseModel;
- (void)dealloc;
- (id)wrapOutputWithIndex:(id)a0 result:(id)a1;
- (void).cxx_destruct;

@end
