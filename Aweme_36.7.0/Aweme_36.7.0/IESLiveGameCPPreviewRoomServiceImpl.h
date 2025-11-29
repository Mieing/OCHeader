@class NSString;

@interface IESLiveGameCPPreviewRoomServiceImpl : NSObject <IESGCPLivePreviewRoomService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showMaskView;
- (BOOL)isPreStream;
- (void)trackPreviewModuleShow:(id)a0;
- (void)trackPreviewModuleClick:(id)a0;
- (void)closeMaskViewWithClickOnBlankArea:(BOOL)a0;
- (BOOL)isShowMaskView;
- (void)enterRoomFromPreStream:(id)a0;
- (void)addInnerParamsToLiveRoom:(id)a0;
- (id)getInnerParamsFromPreStream;
- (id)getEnterSubMethodStrIfHave;

@end
