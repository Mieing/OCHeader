@class NSString;

@interface AWEKnowledgeRuleLexer : NSObject

@property (copy, nonatomic) NSString *input;
@property (nonatomic) unsigned long long position;

- (id)readIdentifier;
- (BOOL)isOperatorStart:(unsigned short)a0;
- (id)readOperator;
- (BOOL)isOperatorPart:(unsigned short)a0;
- (id)tokenize;
- (void).cxx_destruct;
- (id)readString;
- (id)initWithInput:(id)a0;
- (id)readNumber;

@end
