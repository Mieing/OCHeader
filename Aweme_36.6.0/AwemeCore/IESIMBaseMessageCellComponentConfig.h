@class NSString;

@interface IESIMBaseMessageCellComponentConfig : NSObject <IESIMMessageCellComponentConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userMessageExternalRefChildComponents:(id)a0;

- (id)cellViewModelComponents:(id)a0;
- (id)userMessageTemplateComponents:(id)a0;
- (id)userMessageQuoteReplyChildComponents:(id)a0;
- (id)userMessageNameContainerChildComponents:(id)a0;
- (id)userMessageTemplateLazyComponents:(id)a0;
- (id)userMessageTailChildComponents:(id)a0;
- (id)userMessageTemplateMenuComponents:(id)a0;
- (id)systemMessageTemplateComponents:(id)a0;
- (id)systemMessageTemplateLazyComponents:(id)a0;

@end
