@class HTSLivePushMessageStore;
@protocol HTSRedEnvelopeActions, IESLiveGiftModule, HTSLivePushMessageActions, IESLiveURLSchemaHandler, IESLiveShareService, IESLiveHybridContainerFactory;

@interface HTSLivePushMessageFragment : IESLiveRoomComponent

@property (retain, nonatomic) HTSLivePushMessageStore *store;
@property (retain, nonatomic) id<IESLiveGiftModule> giftModule;
@property (retain, nonatomic) id<IESLiveHybridContainerFactory> webViewFactory;
@property (retain, nonatomic) id<IESLiveShareService> shareConfig;
@property (retain, nonatomic) id<HTSRedEnvelopeActions> redEnvelopeActionsCreator;
@property (retain, nonatomic) id<HTSLivePushMessageActions> pushMessageActionsCreator;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (nonatomic) long long orientation;

- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void)hideCommentView;
- (void)showChargeView;
- (void).cxx_destruct;

@end
