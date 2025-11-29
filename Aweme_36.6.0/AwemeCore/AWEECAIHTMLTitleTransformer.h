@class NSString;

@interface AWEECAIHTMLTitleTransformer : AWEECAIHTMLBaseTransformer <CMHTMLElementTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagName;

- (id)attributedStringForElement:(id)a0 attributes:(id)a1;

@end
