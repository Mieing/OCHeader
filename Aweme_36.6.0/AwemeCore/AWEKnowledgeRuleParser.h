@interface AWEKnowledgeRuleParser : NSObject

+ (BOOL)isLeftAssociative:(id)a0;
+ (long long)precedence:(id)a0;
+ (id)toPostfix:(id)a0;

@end
