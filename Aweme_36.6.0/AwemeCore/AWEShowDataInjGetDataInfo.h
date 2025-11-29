@class NSDictionary;

@interface AWEShowDataInjGetDataInfo : AWEShowDataInjBaseDataInfo

@property (copy, nonatomic) NSDictionary *injExtra;
@property (copy, nonatomic) id /* block */ buildCustomInjDataContent;

- (id)generateTrackParamsWithSceneConfig:(id)a0;
- (void).cxx_destruct;

@end
