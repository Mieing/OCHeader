@class NSString;

@interface AWEIMServiceMsgContainerFeatureConfigHelper : NSObject <IESIMServiceMsgContainerFeatureInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (BOOL)p_containerWhiteList:(id)a0;

- (BOOL)haveShowOnlineStatusFeature:(id)a0;
- (long long)inputBoxAndImMenuStyle:(id)a0;
- (id)inputStyleInfo:(id)a0;
- (BOOL)enableUseInputMemoryWithCon:(id)a0;
- (BOOL)enableB2CShowInputStateWithCon:(id)a0;
- (BOOL)enableB2CSendInputStateWithCon:(id)a0;
- (id)p_featureConfigModel:(id)a0;
- (id)generateDefaultInputStyleInfo;

@end
