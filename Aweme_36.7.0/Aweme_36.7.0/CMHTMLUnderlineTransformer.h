@class NSString, UIColor;

@interface CMHTMLUnderlineTransformer : NSObject <CMHTMLElementTransformer> {
    long long _style;
    UIColor *_color;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagName;

@end
