@class NSString, NSDictionary, HTSLiveDefaultResult, HTSLiveASTNode;

@interface IESLivePEDecisionResult : NSObject

@property (retain, nonatomic) NSDictionary *feature;
@property (retain, nonatomic) NSDictionary *trigger;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) HTSLiveDefaultResult *defaultValue;
@property (retain, nonatomic) HTSLiveASTNode *output;

- (id)outputNumberWithDefault;
- (id)outputDictionaryWithDefault;
- (id)outputStringWithDefault;
- (id)outputValueWithDefault;
- (id)outputArrayWithDefault;
- (void).cxx_destruct;

@end
