@class NSString;

@interface GXValueParser : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long index;
@property (retain, nonatomic) GXValueParser *nextParser;

+ (id)parserWithExpString:(id)a0;
+ (id)creatParserWithString:(id)a0;

- (id)valueWithObject:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
