@class IESLivePublicScreenView, NSString, HTSEventContext, IESLivePublicScreenContext, IESLivePSActionSheetMarkUserItemView, IESLivePublicScreenMarkUserApi;

@interface IESLivePublicScreenMarkUserAttachment : NSObject <IESLivePSActionSheetMarkUserItemViewDelegate, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) IESLivePublicScreenMarkUserApi *api;
@property (retain, nonatomic) IESLivePSActionSheetMarkUserItemView *itemView;
@property (copy, nonatomic) NSString *introductionPageSchema;
@property (nonatomic) double requestTimeout;
@property (nonatomic) BOOL currentMarkStatus;
@property (nonatomic) BOOL didClickSwitch;
@property (nonatomic) BOOL isMarkedWhenOpenPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;

- (BOOL)shouldActive;
- (void)introductionIconDidClick;
- (id)abilityProtocol;
- (void)addMarkUserPSActionSheetItem;
- (void)addMarkUserActionSheetItem;
- (BOOL)enableMarkUserForNode:(id)a0;
- (void)fetchUserMarkStatusWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)addBubbleGuideIfNeeded;
- (void)updateUserMarkStatusWithUserID:(id)a0 isCancel:(BOOL)a1 completion:(id /* block */)a2;
- (void)trackMarkUserDidClickWhenPanelDismissWithUserID:(id)a0;
- (void)trackMarkUserIntroductionBubbleShow;
- (void)trackMarkUserFailIfNeededWithError:(id)a0;
- (void)addActionSheetItem;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
