@class NSString, NSDictionary, IESLiveStackDynamicRule, NSMutableArray;

@interface IESLiveStackXMLNode : NSObject

@property (weak, nonatomic) IESLiveStackXMLNode *parentNode;
@property (readonly, nonatomic) NSMutableArray *subNodes;
@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) IESLiveStackDynamicRule *rule;
@property (retain, nonatomic) NSMutableArray *productArray;

- (id)initWithElementName:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (id)build;

@end
