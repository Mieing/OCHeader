@class CKDDExeContext, NSString;

@interface AWERecordBeautyRenderActionsImpl : NSObject <AWERecordBeautyRenderActions>

@property (retain, nonatomic) CKDDExeContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)turnOnBeauty;
- (void)turnOffBeauty;
- (void)applyItem:(id)a0 value:(long long)a1;
- (void)removeAllAppliedItems;
- (void)updateAppliedBeautyModels;
- (void)applyItems:(id)a0;
- (void).cxx_destruct;
- (void)removeItems:(id)a0;

@end
