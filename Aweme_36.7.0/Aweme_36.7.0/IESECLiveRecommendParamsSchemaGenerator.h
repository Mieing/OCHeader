@class IESECLiveContext;

@interface IESECLiveRecommendParamsSchemaGenerator : NSObject

@property (retain, nonatomic) IESECLiveContext *liveContext;

- (id)initWithLiveContext:(id)a0;
- (id)getRecommendInfo;
- (id)appendRecommendParamsToSchemaIfNeeded:(id)a0;
- (id)p_appendRecommendToComponentsDic:(id)a0;
- (void).cxx_destruct;

@end
