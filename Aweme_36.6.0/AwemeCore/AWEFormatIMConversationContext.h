@class NSDictionary, NSString;
@protocol IESIMConversationInjectTemplateProtocol;

@interface AWEFormatIMConversationContext : AWEIMComponentContext <IESIMConversationBizContextProtocol>

@property (retain, nonatomic) id<IESIMConversationInjectTemplateProtocol> injectTemplate;
@property (nonatomic) unsigned long long bizSceneTag;
@property (retain, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) NSDictionary *logParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
