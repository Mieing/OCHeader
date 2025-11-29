@class NSString;

@interface AWEIMGroupGrowthModuleService : NSObject <AWEIMGroupGrowthModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showInviteFriendsPanelEnterFrom:(id)a0 enterMethod:(id)a1 scene:(id)a2 openSchema:(id)a3 confirmBtnTitle:(id)a4 notSelectableUids:(id)a5 defaultSelectUids:(id)a6 extra:(id)a7 selectCompletion:(id /* block */)a8;

@end
