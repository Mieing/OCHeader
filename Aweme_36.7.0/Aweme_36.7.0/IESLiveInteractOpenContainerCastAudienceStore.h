@class HTSEventContext, NSString, IESLiveInteractOpenContainerCastInfo, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveInteractOpenContainerCastAudienceStore : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveInteractOpenContainerCastInfo *castInfo;
@property (readonly, nonatomic) BOOL isProcessing;
@property (readonly, copy, nonatomic) NSString *openContainerAppID;
@property (readonly, copy, nonatomic) NSString *openContainerAppName;
@property (readonly, copy, nonatomic) NSString *openContainerAppIcon;
@property (readonly, nonatomic) unsigned long long openContainerCastType;

- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)bringOpenContainerAppToForeground;
- (void)p_bringSonicAppToForeground;
- (void)p_bringNativeAppToForeground;
- (id)p_buildCommonParameters;
- (void)fetchCastPlayModeInfo;
- (void)updateCastInfoWithCastMsg:(id)a0;
- (void)trackAudienceOpenContainerCastWithEventName:(id)a0 extraDict:(id)a1;
- (void).cxx_destruct;

@end
