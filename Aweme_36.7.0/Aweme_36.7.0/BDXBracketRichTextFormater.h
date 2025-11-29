@class NSString;
@protocol BDXBracketRichTextFormaterUIDelegate;

@interface BDXBracketRichTextFormater : NSObject <BDXRichTextFormater>

@property (weak, nonatomic) id<BDXBracketRichTextFormaterUIDelegate> UIDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFormater;

- (id)formateRawText:(id)a0 defaultAttibutes:(id)a1;
- (void).cxx_destruct;

@end
