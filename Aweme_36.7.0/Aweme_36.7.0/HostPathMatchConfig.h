@class NSArray;

@interface HostPathMatchConfig : NSObject

@property (copy, nonatomic) NSArray *hostGroup;
@property (copy, nonatomic) NSArray *equalGroup;
@property (copy, nonatomic) NSArray *prefixGroup;
@property (copy, nonatomic) NSArray *patternGroup;

- (void).cxx_destruct;
- (id)initWithConfigDict:(id)a0;

@end
