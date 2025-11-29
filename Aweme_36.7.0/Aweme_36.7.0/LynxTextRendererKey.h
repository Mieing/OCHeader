@class NSAttributedString, LynxLayoutSpec;

@interface LynxTextRendererKey : NSObject {
    NSAttributedString *_attrStr;
    LynxLayoutSpec *_layoutSpec;
    unsigned long long _hashValue;
}

- (id)initWithAttributedString:(id)a0 layoutSpec:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
