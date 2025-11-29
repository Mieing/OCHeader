@protocol IESLiveGiftModule, IESLiveOuterEnterRoomService, IESLiveContainerRouter, IESLiveReturnBackRouter;

@interface IESLiveRoomSchemaBaseParser : NSObject

@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (retain, nonatomic) id<IESLiveReturnBackRouter> returnRouter;
@property (retain, nonatomic) id<IESLiveOuterEnterRoomService> outerEnterRoomService;
@property (retain, nonatomic) id<IESLiveGiftModule> giftModule;

- (id)attachingDIContext;
- (void)parseParams:(id)a0 roomAisle:(id)a1;
- (void)openSchemaAfterEnterRoom:(id)a0;
- (id)_naviFirstViewController;
- (BOOL)needPopupNavigatrion:(id)a0;
- (void)p_enterRoomWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_enterRoomWithParamsModel:(id)a0 completion:(id /* block */)a1;
- (void)p_handleActionsAfterEnterRoomWithParamsModel:(id)a0;
- (id)p_generatePromptsWithParamsModel:(id)a0;
- (void)pr_handleActionsAfterEnterRoomWithParamsModel:(id)a0;
- (BOOL)p_popPanelActionWithParamsModel:(id)a0;
- (void)p_showGiftActionWithParamsModel:(id)a0;
- (id)p_i18nTipsWithParamsModel:(id)a0;
- (id)p_tipsWithParamsModel:(id)a0;
- (void).cxx_destruct;
- (id)_topViewController;

@end
