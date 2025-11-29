@class NSString, NSDictionary, NSArray;

@interface CMCLoggerContextInfo : NSObject

@property (copy, nonatomic) NSString *subTag;
@property (copy, nonatomic) NSString *cmcTag;
@property (copy, nonatomic) NSDictionary *funcNameDict;
@property (copy, nonatomic) NSDictionary *multiFuncNameDict;
@property (copy, nonatomic) NSDictionary *patternFuncNameDict;
@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSArray *patternParamArray;
@property (copy, nonatomic) NSDictionary *nodePatternDict;

+ (id)infoWithConfig:(id /* block */)a0;

- (void).cxx_destruct;

@end
