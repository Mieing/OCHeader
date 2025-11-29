@class NSString, FinderTfLiteMultiClassifyPredict, FinderTfLiteSinglePredict, NSMutableArray;

@interface WCFinderDicOutputUDRPredictor : NSObject

@property (copy, nonatomic) NSString *ilinkRes;
@property (copy, nonatomic) NSString *detailName;
@property (copy, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSMutableArray *featuresIndex;
@property (retain, nonatomic) NSMutableArray *outputIndex;
@property (retain, nonatomic) NSString *modelMd5;
@property (nonatomic) BOOL isWork;
@property (retain, nonatomic) FinderTfLiteMultiClassifyPredict *basePredict;
@property (copy, nonatomic) NSString *gCachedDetailsJsonStr;
@property (copy, nonatomic) NSString *gCachedDetailsJsonPath;
@property (nonatomic) long long gCachedDetailsJsonLength;
@property (retain, nonatomic) FinderTfLiteSinglePredict *singlePredict;

- (id)initWithIlinkRes:(id)a0 detailName:(id)a1 modelName:(id)a2;
- (BOOL)isWorking;
- (void)clear;
- (id)getPredictor;
- (id)getUDRResourceId;
- (void)autoFetchUDRSourceCheck;
- (BOOL)initPredictor;
- (BOOL)checkMd5;
- (id)getMd5FromDetails;
- (BOOL)initInputOutputIndex;
- (id)getFeaturesIndexFromDetails;
- (id)getOutputIndexFromDetails;
- (long long)getOutputSizeFromDetails;
- (id)getDetailsJsonStr;
- (id)getBusinessTypeFromPath:(id)a0;
- (void).cxx_destruct;

@end
