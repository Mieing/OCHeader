@class NSString;
@protocol IESLiveFeedDrawerProvider, IESLiveContainerRouter, IESLiveReturnBackRouter, IESLiveSquareService;

@interface IESLiveRankListPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveReturnBackRouter> returnRouter;
@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (retain, nonatomic) id<IESLiveFeedDrawerProvider> feedDrawer;
@property (weak, nonatomic) id<IESLiveSquareService> squareService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)dailyrankGotoLiveCallHandler;
- (BOOL)_enableRankListSlideWithRoomIDs;
- (BOOL)_enableRankListSlideWithRoomIDsFeedDrawer;
- (void).cxx_destruct;

@end
