@class NSString;

@interface AWEIMSkylightFlashBackDataBuilder : NSObject <AWEIMSkylightDataBizBuilderProtocol>

@property (nonatomic) BOOL waitting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildViewModelsWithContext:(id)a0 bizType:(unsigned long long)a1;
- (id)buildViewModelsDynamicWithBizModel:(id)a0;
- (BOOL)checkEnableBuildDataWithBizModel:(id)a0;

@end
