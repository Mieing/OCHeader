@class NSString, NSMutableArray;
@protocol IESLiveEmoticonInterface;

@interface IESLiveEmoticonInterfaceImpl : IESLiveGeneralBaseService <IESLiveEmoticonInterface>

@property (retain, nonatomic) NSMutableArray *allRegisteredEmoticonItems;
@property (weak, nonatomic) id<IESLiveEmoticonInterface> interface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)registerEmoticonPageWithItem:(id)a0;
- (id)registerdEmoticonItems;
- (void)openCommentPanelWithActivityEmoji:(id)a0 messageSource:(id)a1 requestSource:(id)a2;
- (void)openCommentPanelWithFusionEmoji:(id)a0 messageSource:(id)a1 requestSource:(id)a2;
- (void)injectInterface:(id)a0;
- (void).cxx_destruct;

@end
