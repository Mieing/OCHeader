@class NSString, NSMutableDictionary;

@interface AWEIMChatlistPostMsgTrackComponent : AWEIMComponentBase <AWEPublishTaskMessage, IESIMPublishMessageStateMessage>

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didCreateMsgVideoCreateID:(id)a0 publishInfo:(id)a1;
- (id)longImageVideoGenerationConfig;
- (void).cxx_destruct;
- (void)dealloc;

@end
