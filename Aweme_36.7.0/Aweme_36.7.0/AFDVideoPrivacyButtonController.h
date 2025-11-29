@class NSString, NSArray, AWEAwemeModel, UIButton;

@interface AFDVideoPrivacyButtonController : NSObject <AFDAwemePermissionMessage, AFDVideoPrivacyButtonControllerProtocol>

@property (retain, nonatomic) UIButton *privacySettingButton;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL verticalCenterStyle;
@property (nonatomic) BOOL textAndIconMixStyle;
@property (copy, nonatomic) NSArray *disallowedPrivacyCellTypes;
@property (copy, nonatomic) id /* block */ isDraggingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeAwemePrivacyType:(id)a0 privacyPermissionType:(long long)a1 extra:(id)a2 syncHandle:(id /* block */)a3;
- (BOOL)showBottomRightButtonIfPossible;
- (void)doPrivateToPublicForComment;
- (void)doPrivacySettingAction;
- (id)realAweme;
- (BOOL)shouldForbidChangePrivacyForXiguaStartAtlas;
- (void)trackShowPrivacySetting:(id)a0;
- (BOOL)isVideoAnalysisPanelStyle:(id)a0;
- (void)updatePrivacyIconWithModel:(id)a0;
- (void)updatePrivacyTextWithModel:(id)a0;
- (void)trackToPublic:(id)a0 enterMethod:(id)a1 isCancel:(BOOL)a2;
- (id)titleActionWithTitle:(id)a0;
- (void)trackPublicPermission:(BOOL)a0;
- (void)transferToPublic:(id)a0;
- (id)confirmActionWithTitle:(id)a0 confirmHandler:(id /* block */)a1;
- (void)trackClickPrivacySetting:(id)a0;
- (id)createPrivacyButtonForBottomBarWithVideoAnalysisEntrance;
- (id)p_verticalCenterButtonWithTitle:(id)a0 imageNamed:(id)a1;
- (id)createPrivacyButtonForTextAndIconMixStyle;
- (id)createButtonWithTitle:(id)a0;
- (void)privacySettingButtonAction:(id)a0;
- (void)trackConfirmToPublic:(id)a0 enterMethod:(id)a1;
- (BOOL)useNewDiagnoseStyle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
