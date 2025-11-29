@class NSMutableString, NSMutableSet;

@interface GXCssParser : NSObject {
    NSMutableString *_propertyValue;
    NSMutableString *_propertyName;
    NSMutableString *_quotedString;
    NSMutableString *_selector;
    NSMutableSet *_itemSet;
    unsigned short _prevChar;
    unsigned long long _prevState;
    unsigned long long _state;
}

- (void)configureProperty;
- (void)collectSelector:(unsigned short)a0;
- (void)collectPropertyName:(unsigned short)a0 resultDict:(id)a1;
- (void)collectPropertyValue:(unsigned short)a0;
- (void)collectTextInsideQuotes:(unsigned short)a0;
- (BOOL)checkCommentState:(unsigned short)a0;
- (void)collectPropertyNameOnly;
- (void).cxx_destruct;
- (id)init;
- (id)parse:(id)a0;
- (void)handleComment:(unsigned short)a0;

@end
