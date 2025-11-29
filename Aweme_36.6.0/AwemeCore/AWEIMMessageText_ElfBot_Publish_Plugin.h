@class NSString, NSAttributedString;

@interface AWEIMMessageText_ElfBot_Publish_Plugin : AWEIMFlexComponent <AWEIMMessageTextPluginProtocol>

@property (retain, nonatomic) NSAttributedString *attributedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decoratedAttributedContentWithAttributedContent:(id)a0 message:(id)a1;
- (void).cxx_destruct;

@end
