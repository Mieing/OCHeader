@class NSString, NSArray, AWECodeGenAigcTaskCodeInfoModel;

@interface AWECodeGenV1AiMemoryCollectionGenerateResponse : AWEBaseResponseModel

@property (nonatomic) int statuscode;
@property (copy, nonatomic) NSString *statusmessage;
@property (copy, nonatomic) NSString *taskid;
@property (copy, nonatomic) NSArray *collectionrowsModelArray;
@property (copy, nonatomic) NSArray *assetidsArray;
@property (retain, nonatomic) AWECodeGenAigcTaskCodeInfoModel *codeInfoModel;
@property (copy, nonatomic) NSString *aigcPerformanceInfo;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
