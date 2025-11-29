@class IRISDataModelUIParser, IRISDataReferFeatureOptions;

@interface IRISDataModelContext : NSObject

@property (retain, nonatomic) IRISDataReferFeatureOptions *options;
@property (retain, nonatomic) IRISDataModelUIParser *parser;
@property (copy, nonatomic) id /* block */ logger;

- (void).cxx_destruct;

@end
