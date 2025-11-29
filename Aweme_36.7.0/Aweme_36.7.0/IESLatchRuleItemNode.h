@class IESLatchAPITemplate, NSDictionary, NSArray;

@interface IESLatchRuleItemNode : NSObject

@property (retain, nonatomic) IESLatchAPITemplate *apiTemplate;
@property (copy, nonatomic) NSDictionary *apis;
@property (copy, nonatomic) NSArray *queryNodes;
@property (copy, nonatomic) NSDictionary *apiPath;
@property (nonatomic) unsigned long long apiPathPattern;

- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
