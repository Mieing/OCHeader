@class NSString, NSDictionary, AWEUGPendantActivityInfo, AWEUGPendantActivityConfig, AWEUGPendantModel;

@interface AWEUGPendantActivityModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUGPendantActivityInfo *activityInfo;
@property (retain, nonatomic) AWEUGPendantActivityConfig *activityConfig;
@property (retain, nonatomic) AWEUGPendantModel *pendantModel;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
