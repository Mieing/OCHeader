@class NSString;

@interface CMHTMLScriptTransformer : NSObject <CMHTMLElementTransformer> {
    long long _style;
    double _fontSizeRatio;
    double _baselineOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagName;

- (id)attributedStringForElement:(id)a0 attributes:(id)a1;
- (id)initWithStyle:(long long)a0 fontSizeRatio:(double)a1 baselineOffset:(double)a2;

@end
