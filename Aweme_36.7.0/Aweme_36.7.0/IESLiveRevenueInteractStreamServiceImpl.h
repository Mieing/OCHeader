@class IESLiveRevenueInteractLinkerLayout, NSString;

@interface IESLiveRevenueInteractStreamServiceImpl : NSObject <IESLiveRevenueInteractStreamService>

@property (retain, nonatomic) IESLiveRevenueInteractLinkerLayout *linkerLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)trackWithEvent:(id)a0 extra:(id)a1;
- (id)baseTrackParams;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (long long)alignMode;
- (void)saas_resolveMultiLinkerSEIMetaInfo:(id)a0 mediaSize:(struct CGSize { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)resolveMultiLinkerSEIResult:(id)a0 mediaSize:(struct CGSize { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2 isPCVerticalRoom:(BOOL)a3 completion:(id /* block */)a4;
- (id)linkerLayoutProvider;
- (BOOL)trackWithEventIncludePreStream:(id)a0 params:(id)a1;
- (BOOL)monitorBusinessName:(id)a0 extra:(id)a1;
- (void)updateLayoutWithResult:(id)a0 isMobileCrop:(BOOL)a1 isPCVerticalRoom:(BOOL)a2 isScreenshotH:(BOOL)a3 isAudioRoom:(BOOL)a4 isMultiGameRoom:(BOOL)a5;
- (void)updateDoubleInteractionLayoutWithResult:(id)a0 roomScene:(long long)a1 isPCVerticalRoom:(BOOL)a2 isAudioRoom:(BOOL)a3;
- (void)dealWithDoubleInteractionSEI:(id)a0 isPreview:(BOOL)a1 isAudioRoom:(BOOL)a2 roomScene:(long long)a3 completion:(id /* block */)a4;
- (void)dealWithDoubleInteractionResult:(id)a0 isPreview:(BOOL)a1 roomScene:(long long)a2 isPCVerticalRoom:(BOOL)a3 isAudioRoom:(BOOL)a4 completion:(id /* block */)a5;
- (void)resolveInteractWithSEIResult:(id)a0 isAudioRoom:(BOOL)a1 mediaSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (BOOL)logInfoWithEvent:(id)a0 params:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vicePlayerFrame;
- (id)bizSlots;
- (BOOL)isBusinessDidReady;
- (void)checkFileExist;
- (id)getDeviceTypeWithSEIResult:(id)a0;
- (void)asyncParseSEI:(id)a0 completion:(id /* block */)a1;
- (void)needMultiGameCrop:(id)a0 isMultiGameRoom:(BOOL)a1;
- (BOOL)isPC:(id)a0;
- (BOOL)isPCVerticalRoom:(id)a0;
- (id)parseSEIResultForPlayer:(id)a0;
- (id)getBackGroundColor:(id)a0;
- (void).cxx_destruct;
- (long long)scaleType;

@end
