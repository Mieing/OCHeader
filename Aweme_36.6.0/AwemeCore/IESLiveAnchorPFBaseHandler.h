@class HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveAnchorPFHandlerDelegate;

@interface IESLiveAnchorPFBaseHandler : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<IESLiveAnchorPFHandlerDelegate> delegate;

- (void)pauseLive;
- (void)resumeLive;
- (void)bindAction;
- (void)didStartLive;
- (id)providedPerfInfo;
- (void)didStopLive;
- (void)processBasePerfInfo:(id)a0;
- (void).cxx_destruct;
- (void)didLoad;
- (void)didUnload;

@end
