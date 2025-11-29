@class NSString;

@interface CMCLoggerContextPatternNodeInfo : NSObject

@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSString *nodeName;

+ (id)infoWithConfig:(id /* block */)a0;

- (void).cxx_destruct;

@end
