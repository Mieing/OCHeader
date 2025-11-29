@class NSDictionary, NSString;

@interface AWEThroughQuestionnaireGeneralSmartServiceConfig : NSObject

@property (retain, nonatomic) NSDictionary *serviceConfigDict;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ getOuterQuestionnaireBlock;
@property (copy, nonatomic) id /* block */ getInnerQuestionnaireBlock;

- (void).cxx_destruct;

@end
