@class NSMapTable, NSDictionary, HTSLiveApi, NSString;

@interface IESLiveDotAndBubbleManager : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) HTSLiveApi *api;
@property (copy, nonatomic) NSDictionary *panels;
@property (retain, nonatomic) NSMapTable *registerHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerHandlerWithItem:(id)a0 inShowPath:(id)a1 handler:(id)a2;
- (void)requestForPath:(id)a0;
- (void)handleInfo:(id)a0 forItem:(id)a1;
- (id)subPanelInfoWithItem:(id)a0;
- (id)subDotInfoWithItem:(id)a0 dotInfoMap:(id)a1;
- (void)handleDotInfo:(id)a0 forItemId:(id)a1 dotInfoMap:(id)a2 handlerKey:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
