@class HTSLivePayGradeResponse_Data, IESLiveCombineSubject, RACReplaySubject, NSString, NSDictionary, IESLivePrivilegeEntranceBarInfo, IESLivePrivilegeHonorLevelModel, NSNumber;
@protocol IESLivePrivilegeEntranceBarAPI;

@interface IESLivePrivilegeEntranceBarViewModel : IESLiveCubeViewModel <IESLiveGiftDynamicPanelPrivilegeRPCService>

@property (retain, nonatomic) IESLivePrivilegeEntranceBarInfo *entranceBarInfo;
@property (retain, nonatomic) HTSLivePayGradeResponse_Data *payGrade;
@property (retain, nonatomic) IESLivePrivilegeHonorLevelModel *honorLevelModel;
@property (retain, nonatomic) NSNumber *entranceBarWillDisappear;
@property (retain, nonatomic) NSNumber *selectedGiftDiamond;
@property (retain, nonatomic) NSNumber *giftPageTypeDidChanged;
@property (copy, nonatomic) NSDictionary *selectedGiftInfo;
@property (retain, nonatomic) id<IESLivePrivilegeEntranceBarAPI> barApi;
@property (retain, nonatomic) IESLiveCombineSubject *payGradeSubject;
@property (retain, nonatomic) RACReplaySubject *touchPositionRPCPublisher;
@property (retain, nonatomic) RACReplaySubject *payGradeRPCPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)currentPrivilegeEntranceBarInfo;
- (id)observeTouchPositionInfo;
- (id)observePayGrade;
- (BOOL)shouldShowPrivilegeEntranceBar;
- (void)updatePrivilegeEntranceBarInfo;
- (void)fetchPayGrade;
- (void)cleanEntranceBarInfo;
- (void)p_updateEntranceBarInfo:(id)a0;
- (void)sendTouchPosition;
- (void)sendPayGrade;
- (BOOL)p_enableHonorLevel;
- (void)actionEntranceBarWillDisappear:(id)a0;
- (void)actionSelectedGiftDiamond:(id)a0;
- (void)actionSelectedGiftInfo:(id)a0;
- (void)actionGiftPageTypeDidChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
