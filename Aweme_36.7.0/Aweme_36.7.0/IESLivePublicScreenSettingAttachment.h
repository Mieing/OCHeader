@class IESLivePublicScreenSettingManager, HTSEventContext, NSString, IESLivePublicScreenContext, IESLivePublicScreenView;

@interface IESLivePublicScreenSettingAttachment : NSObject <IESLivePSCommonAttachmentProtocol, IESLivePublicScreenSettingProtocol>

@property (retain, nonatomic) IESLivePublicScreenSettingManager *settingManager;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldActive;
- (void)showPublicScreenSettingPanelViewWithScene:(id)a0;
- (id)abilityProtocol;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
