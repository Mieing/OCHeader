@class NSString;

@interface AWELynxRichTextBracketUIDelegate : NSObject <BDXBracketRichTextFormaterUIDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentStringWithEmojiImage:(id)a0 fontSize:(double)a1 attributes:(id)a2;
+ (id)sharedInstance;

- (id)BDXBracketRichTextFormater:(id)a0 replaceAttributeMarkString:(id)a1;

@end
