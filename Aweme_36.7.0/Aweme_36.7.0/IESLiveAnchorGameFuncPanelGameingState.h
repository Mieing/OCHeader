@class NSString, NSMutableSet;

@interface IESLiveAnchorGameFuncPanelGameingState : NSObject <IESLiveAnchorGameFuncPanelGameingStateRouter>

@property (retain, nonatomic) NSMutableSet *gameingMutableSet;
@property (copy, nonatomic) NSString *isOpeningNativeAppSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertIsGameingItemWithAppId:(id)a0;
- (void)removeIsGameingItemWithAppId:(id)a0;
- (void)recordIsOpeningNativeAppSchemaWithSchema:(id)a0;
- (void)removeIsOpeningNativeAppSchema;
- (id)isGameingAppId;
- (void).cxx_destruct;

@end
