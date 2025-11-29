@class NSString, NSArray;

@interface CMCLoggerContextNodeInfo : NSObject

@property (copy, nonatomic) NSString *nodeName;
@property (nonatomic) unsigned long long nodeType;
@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSArray *patternParamArray;

+ (id)infoWithConfig:(id /* block */)a0;

- (void).cxx_destruct;

@end
