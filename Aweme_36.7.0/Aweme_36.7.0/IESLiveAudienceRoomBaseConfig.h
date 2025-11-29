@class IESLiveEnterRoomTraceContext, HTSEventContext, IESLiveMultiEnterPreloadConfig, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveDIContext, IESLiveDynamicBackgroundUpdaterService;

@interface IESLiveAudienceRoomBaseConfig : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *pageContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<IESLiveDIContext> roomDI;
@property (retain, nonatomic) IESLiveEnterRoomTraceContext *enterContext;
@property (retain, nonatomic) id<IESLiveDynamicBackgroundUpdaterService> backgroundUpdater;
@property (weak, nonatomic) IESLiveMultiEnterPreloadConfig *enterPreloadConfig;

- (void)logRoomEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
