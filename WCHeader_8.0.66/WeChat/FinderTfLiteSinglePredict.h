@class NSString, NSData, NSArray;

@interface FinderTfLiteSinglePredict : NSObject

@property (retain, nonatomic) NSString *modelPath;
@property (nonatomic) struct TfLiteInterpreter { } *tflite;
@property (nonatomic) struct TfLiteModel { } *model;
@property (retain, nonatomic) NSData *modelData;
@property (retain, nonatomic) NSArray *cachedResult;
@property (nonatomic) double lastPredictTime;

- (id)initWithModelPath:(id)a0;
- (id)predictWithFeatures:(id)a0 outputSize:(long long)a1;
- (BOOL)loadModel;
- (BOOL)inputsCheckWithFeatures:(id)a0;
- (void)releaseModel;
- (void)dealloc;
- (void).cxx_destruct;

@end
