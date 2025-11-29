@class ACCVideoQualityBaseSource, NSString, AWEVideoPublishViewModel, ACCVideoQualityStrategyModel;

@interface ACCVideoQualityBaseStrategy : NSObject <ACCVideoQualityStrategyProtocol>

@property (retain, nonatomic) ACCVideoQualityStrategyModel *strategyModel;
@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (copy, nonatomic) NSString *strategyResult;
@property (weak, nonatomic) ACCVideoQualityBaseSource *belongedSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategyName;

- (id)videoQualitySetting;
- (BOOL)isCanExecuteInStage:(id)a0;
- (id)initWithStrategyModel:(id)a0 inContext:(id)a1;
- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;

@end
