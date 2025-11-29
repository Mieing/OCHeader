@class NSDictionary, NSString;

@interface HMDMachSyntaxParser_v1 : HMDMachSyntaxParser

@property (retain, nonatomic) NSDictionary *syntaxDictionary;
@property (retain, nonatomic) NSString *syntaxScope;
@property (retain, nonatomic) NSString *syntaxError;

+ (id)syntaxParserWithDictionary:(id)a0;

- (id)parse;
- (void).cxx_destruct;
- (id)identifier;
- (id)errorString;

@end
