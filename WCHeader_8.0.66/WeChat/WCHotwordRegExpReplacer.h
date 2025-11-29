@class NSDictionary, NSString;

@interface WCHotwordRegExpReplacer : NSObject

@property (copy, nonatomic) NSDictionary *replacements;
@property (copy, nonatomic) NSString *regExpPattern;
@property (nonatomic) unsigned long long matchingMaxLength;

- (id)initWithReplacements:(id)a0 matchingMaxLength:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (id)regExpPatternWithReplacements:(id)a0;
- (id)replacedContentForContent:(id)a0;
- (void).cxx_destruct;

@end
