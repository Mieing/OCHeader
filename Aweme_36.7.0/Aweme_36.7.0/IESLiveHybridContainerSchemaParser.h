@class NSString, IESHYURLParserHandler;
@protocol IESLiveRoomService, IESLiveInternalRouter, IESLiveWebViewService;

@interface IESLiveHybridContainerSchemaParser : NSObject <IESLiveHybridSchemaParser, IESLiveFullWebViewProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) IESHYURLParserHandler *hyURLHandler;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)parseWithParams:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (id)parseWebViewWithParameter:(id)a0 fromInside:(BOOL)a1;
- (void)p_parseWebViewWithParameter:(id)a0 fromInside:(BOOL)a1;
- (id)p_parseVCWebViewWithParameter:(id)a0 fromInside:(BOOL)a1;
- (void)showFullScreenWebview:(id)a0;
- (id)parseVCWithParams:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
