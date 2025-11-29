@class NSString, IESLivePublicScreenAudienceSettingManager, IESLivePublicScreenContext, HTSEventContext, IESLivePublicScreenView;

@interface IESLivePublicScreenAudienceSettingAttachment : NSObject <IESLivePublicScreenAudienceSettingProtocol, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) IESLivePublicScreenAudienceSettingManager *audienceSettingManager;
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
- (void)publicScreenWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)publicScreenWillBeginDragging:(id)a0;
- (void)publicScreenTapped;
- (void)publicScreenLongPressed;
- (void)publicScreenCollectionView:(id)a0 heightWillChangeWithLayoutData:(id)a1;
- (void)publicScreenCollectionView:(id)a0 heightDidChangeWithLayoutData:(id)a1;
- (id)abilityProtocol;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
