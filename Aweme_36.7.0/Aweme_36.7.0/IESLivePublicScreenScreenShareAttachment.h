@class NSString, HTSEventContext, IESLivePublicScreenContext, IESLiveLittlePublicScreenView, IESLivePublicScreenView;

@interface IESLivePublicScreenScreenShareAttachment : NSObject <IESLiveGameOpenPlatformShareScreenActionsAdapter, IESLiveCommonCastScreenElementHandler, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) IESLivePublicScreenView *screenSharePSView;
@property (retain, nonatomic) IESLiveLittlePublicScreenView *linkGameLittlePSView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;

- (void)didSetAttachingDIContext;
- (BOOL)shouldActive;
- (void)shareScreenDidStartWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidStopWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)nativeGiftEndWith:(id)a0;
- (id)abilityProtocol;
- (id)createPublicScreenViewWithSize:(struct CGSize { double x0; double x1; })a0 publicScreenType:(unsigned long long)a1 viewClass:(Class)a2 useAttachments:(BOOL)a3;
- (id)providerCommonCastScreenElementWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateCommonCastScreenElementSize:(struct CGSize { double x0; double x1; })a0;
- (void)showCommonCastScreenElementIfNeed:(BOOL)a0;
- (void)closeCommonCastScreenElementView;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
