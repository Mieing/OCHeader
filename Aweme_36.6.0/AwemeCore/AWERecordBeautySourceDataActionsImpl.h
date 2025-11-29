@class CKDDExeContext, NSString;

@interface AWERecordBeautySourceDataActionsImpl : NSObject <AWERecordBeautySourceDataActions>

@property (retain, nonatomic) CKDDExeContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (void)updateRootNode:(id)a0;
- (void)p_bindStatusModelsToTree:(id)a0 inState:(id)a1;
- (id)p_generateStatusModelForCategory:(id)a0;
- (void).cxx_destruct;

@end
