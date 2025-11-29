@class DUXBasicSheet, NSArray, NSDictionary, NSMutableDictionary, AWEPublishCoCreatorSettingsRoleModel, NSMutableArray, NSString;
@protocol AWEPublishCoproduceViewModelDelegate;

@interface AWEPublishCoproduceViewModel : NSObject <AWEPublishCoproduceSearchViewControllerDelegate>

@property (nonatomic) BOOL fromDraft;
@property (copy, nonatomic) NSArray *editedCoproducerList;
@property (copy, nonatomic) NSArray *coProduceRoles;
@property (retain, nonatomic) AWEPublishCoCreatorSettingsRoleModel *defaultRole;
@property (nonatomic) long long certStatus;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) DUXBasicSheet *searchSheet;
@property (retain, nonatomic) NSDictionary *coProducerRolesLimitDict;
@property (retain, nonatomic) NSMutableDictionary *coProducerRolesCurrentDict;
@property (weak, nonatomic) id<AWEPublishCoproduceViewModelDelegate> delegate;
@property (nonatomic) long long maxCoProducers;
@property (nonatomic) long long currentCoProducerCount;
@property (nonatomic) long long coPublishTimes;
@property (nonatomic) long long totalCoPublishTimes;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) NSMutableArray *coProduceUserList;
@property (nonatomic) BOOL canEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSheetContainerEnableDrag:(BOOL)a0;
- (id)initWithCoProduceRoles:(id)a0 fromDraft:(BOOL)a1 editedCoproducerList:(id)a2 maxCoProducers:(long long)a3 coPublishTimes:(long long)a4 totalCoPublishTimes:(long long)a5 logExtra:(id)a6;
- (void)updateCurrentCoProducerCount;
- (void)trackInfoViewFirstShowEvent;
- (id)userAtIndexPath:(id)a0;
- (void)showIdentifyChangePanelWithCell:(id)a0;
- (void)addCoproduceButtonTapped;
- (void)trackCoProduceSelcectFinishEvent;
- (void)trackCoProduceDeleteEventWithModel:(id)a0;
- (void)updateCoProducerRolesAfterDeleteWithRoleName:(id)a0;
- (void)showCancelConfirmAlertIfNeed;
- (void)initCoProduceUserList;
- (void)configCoProducerRoles;
- (void)trackCoProduceAddPublishWithModel:(id)a0;
- (id)p_getAddCoCreatorInfo;
- (BOOL)shouldShowCancelConfirmAlert;
- (void)trackCoProduceExitClickWithSelectString:(id)a0;
- (void)showCannotChangeIdentifyAlert;
- (void)trackCoProduceChangeRolesWithModel:(id)a0;
- (void)trackCoProduceChangeRoles:(id)a0 updatedRole:(id)a1 userModel:(id)a2;
- (void)addCoProducer:(id)a0;
- (id)p_getCoCreatorInfoString;
- (void)addUserToCoProduceUserList:(id)a0;
- (void).cxx_destruct;

@end
