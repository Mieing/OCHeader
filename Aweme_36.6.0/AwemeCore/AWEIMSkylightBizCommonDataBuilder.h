@class NSDictionary, NSString;

@interface AWEIMSkylightBizCommonDataBuilder : NSObject <AWEIMSkylightDataBizBuilderProtocol>

@property (nonatomic) BOOL needCurrentLoginUser;
@property (copy, nonatomic) NSDictionary *bizTypeToVMTypeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)builderWithNeedCurrentLoginUser:(BOOL)a0;

- (id)buildViewModelsWithContext:(id)a0 bizType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
