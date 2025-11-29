@class NSString, NSMutableDictionary, AWEUserModel;

@interface AFDMomentInteractionManager : NSObject <AFDMomentInteractionManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *requestDiggStatusDictionary;
@property (retain, nonatomic) AWEUserModel *settingsPanelInsertUser;
@property (nonatomic) BOOL isMaskViewShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)retryPublishModel:(id)a0;
+ (void)didPublishModel:(id)a0;
+ (void)deleteMomentModel:(id)a0 completion:(id /* block */)a1;
+ (void)postDeleteNotification:(id)a0;
+ (id)sharedManager;

@end
