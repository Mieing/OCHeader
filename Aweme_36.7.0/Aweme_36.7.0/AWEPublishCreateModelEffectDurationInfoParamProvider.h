@class NSString, AWEPublishCreateModelParamContext;

@interface AWEPublishCreateModelEffectDurationInfoParamProvider : NSObject <AWEPublishCreateModelParamProvider>

@property (retain, nonatomic) AWEPublishCreateModelParamContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)effectInfo;
- (id)effectInfoWithProject:(id)a0 duration:(double)a1;
- (double)durationWithProject:(id)a0 index:(long long)a1;
- (id)publishRequestParams:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
