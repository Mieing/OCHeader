@class NSString, AWEUserModel, NSObject;
@protocol AWEAddressBookListUserGeneralCellDelegate, NSCopying;

@interface AWEAddressBookListUserGeneralCellBusinessModel : NSObject <BDStateMachineDelegate, AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *source;
@property (weak, nonatomic) id<AWEAddressBookListUserGeneralCellDelegate> cellDelegate;
@property (retain, nonatomic) NSObject<NSCopying> *currentState;
@property (nonatomic) BOOL hasDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)suggestedHeight;

- (void)stateMachine:(id)a0 transition:(id)a1 didLeaveFromState:(id)a2 didEnterState:(id)a3 event:(id)a4;
- (long long)addressBookListOrderStyle;
- (BOOL)approveCondition;
- (BOOL)addMateCondition;
- (BOOL)appliedCondition;
- (BOOL)sendMessageCondition;
- (id)approveState;
- (id)addMateState;
- (id)sendMessageState;
- (id)transitionToApproveState;
- (id)transitionToAddMateState;
- (id)transitionToAppliedState;
- (id)transitionToSendMessageState;
- (id)lightInteractionContext;
- (id)relationSheetContext;
- (id)relationContext;
- (void)reportRelationButtonDisplayIfNeeded;
- (BOOL)shouldShowRelationTag;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)relationButtonIncludesDefaultLightInteractionState;
- (BOOL)relationButtonIncludesDefaultSendMessageState;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (id)extraRelationButtonStates;
- (id)extraRelationButtonTransitions;
- (id)stateMachineDelegate;
- (BOOL)disableDefaultButtonRefresh;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowDisclosureIndicator;
- (void).cxx_destruct;
- (id)initWithUserModel:(id)a0;
- (id)subTitle;
- (id)title;
- (double)avatarSize;
- (id)appliedState;

@end
