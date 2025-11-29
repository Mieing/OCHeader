@class NSString;

@interface HMDMachSyntaxParser : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *errorString;

+ (id)syntaxParserWithDictionary:(id)a0;
+ (id)syntaxParserForVersion:(unsigned long long)a0 withDictionary:(id)a1;
+ (id)syntaxParserWithString:(id)a0;

- (id)parse;
- (id)identifier;
- (id)errorString;

@end
