@class NSString;

@interface TTAHTMLImgTransformer : AWEECAIHTMLBaseTransformer <CMHTMLElementTransformer>

@property (copy, nonatomic) id /* block */ imgCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagName;

- (id)attributedStringForElement:(id)a0 attributes:(id)a1;
- (void).cxx_destruct;

@end
