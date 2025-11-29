@class IESLiveDI, HTSEventContext, IESLiveComponentContext, UIViewController;
@protocol IESLiveRoomService;

@interface IESLiveAnchorContext : IESLiveContainerBaseContext

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) IESLiveDI *roomDI;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) UIViewController *rootVC;
@property (retain, nonatomic) HTSEventContext *pageContext;

- (id)sourceParams;
- (id)initWithComponentContext:(id)a0 pageContext:(id)a1;
- (void).cxx_destruct;

@end
