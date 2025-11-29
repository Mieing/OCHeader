@class NSString, NSMutableArray, FinderTfLiteSinglePredict;

@interface WCFinderArrayOutputUDRPredictor : NSObject

@property (retain, nonatomic) NSMutableArray *featuresIndex;
@property (retain, nonatomic) NSString *modelMd5;
@property (nonatomic) BOOL isWork;
@property (retain, nonatomic) FinderTfLiteSinglePredict *basePredict;
@property (copy, nonatomic) NSString *gCachedDetailsJsonStr;
@property (nonatomic) long long gCachedDetailsJsonLength;
@property (copy, nonatomic) NSString *udrResourceId;
@property (copy, nonatomic) NSString *detailName;
@property (copy, nonatomic) NSString *modelName;

- (id)initWithUDRResourceId:(id)a0 detailName:(id)a1 modelName:(id)a2;
- (BOOL)isWorking;
- (void)clear;
- (id)getPredictor;
- (void)autoFetchUDRSourceCheck;
- (BOOL)initPredictor;
- (BOOL)checkMd5;
- (id)getMd5FromDetails;
- (BOOL)initInputIndex;
- (id)getOutputIndexFromDetails;
- (id)getFeaturesIndexFromDetails;
- (long long)getOutputSizeFromDetails;
- (id)getDetailsJsonStr;
- (long long)getBusinessIndexFromPath:(id)a0;
- (long long)getBusinessTypeFromIndex:(long long)a0;
- (void).cxx_destruct;

@end
