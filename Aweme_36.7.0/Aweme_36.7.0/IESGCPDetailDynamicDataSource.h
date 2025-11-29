@class NSMutableDictionary, IESGCPDetailDynamicRegister;

@interface IESGCPDetailDynamicDataSource : NSObject

@property (retain, nonatomic) IESGCPDetailDynamicRegister *viewRegister;
@property (retain, nonatomic) NSMutableDictionary *controlMap;

- (id)analyzeDetailDataWithJsonString:(id)a0 error:(id *)a1;
- (id)analyzeDetailComponentCriteriaDataWithJsonString:(id)a0 error:(id *)a1;
- (id)serializationWithJsonString:(id)a0 error:(id *)a1;
- (id)analyzeDetailComponentCriteriaDataWithJsonDict:(id)a0 error:(id *)a1;
- (id)analyzeContentWithDict:(id)a0 error:(id *)a1;
- (void)prefixRootContent:(id)a0;
- (id)viewControlWithContentNode:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
