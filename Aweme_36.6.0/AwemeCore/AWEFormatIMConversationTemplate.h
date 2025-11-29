@class NSArray, NSString;

@interface AWEFormatIMConversationTemplate : NSObject <IESIMConversationInjectTemplateProtocol>

@property (copy, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *lazyComponents;
@property (copy, nonatomic) NSArray *menuComponents;
@property (copy, nonatomic) NSArray *naviComponents;
@property (copy, nonatomic) NSArray *inputFunctions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (void).cxx_destruct;
- (id)init;

@end
