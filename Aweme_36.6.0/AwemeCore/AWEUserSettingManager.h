@class NSString, AWEIMSettingModel;

@interface AWEUserSettingManager : NSObject <AWEIMSettingModelUpdateMessage>

@property (retain, nonatomic) AWEIMSettingModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerIMSettingModelUpdateMessage;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (id)dynamicCoverConsumerSettingHasModifyKey;
- (void)coldStartOrLoginAction;
- (void)setDynamicCoverConsumerSettingIfNeeded;
- (void).cxx_destruct;

@end
