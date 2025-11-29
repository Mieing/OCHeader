@class NSString;

@interface AWEHamletChatAdapterInitTask : HTSService <BDXLynxInputBracketRichTextFormaterUIDelegate, BDXBracketRichTextFormaterUIDelegate, AWEHamletModuleChatAdapterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentStringWithEmojiImage:(id)a0 name:(id)a1 fontSize:(double)a2 attributes:(id)a3;
+ (id)sharedInstance;

- (void)setEmojiAdapterIfNeeded;
- (id)BDXLynxInputBracketRichTextFormater:(id)a0 replaceAttributeMarkString:(id)a1;
- (id)BDXBracketRichTextFormater:(id)a0 replaceAttributeMarkString:(id)a1;

@end
