@class NSString, NSMutableDictionary, CSSRule;

@interface CSSStyleDeclaration : NSObject

@property (retain, nonatomic) NSMutableDictionary *internalDictionaryOfStylesByCSSClass;
@property (retain, nonatomic) NSString *cssText;
@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) CSSRule *parentRule;

- (id)NSDictionaryFromCSSAttributes:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)removeProperty:(id)a0;
- (id)getPropertyValue:(id)a0;
- (id)getPropertyCSSValue:(id)a0;
- (id)item:(long long)a0;
- (id)getPropertyPriority:(id)a0;
- (void)setProperty:(id)a0 value:(id)a1 priority:(id)a2;

@end
