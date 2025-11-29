@class NSArray;

@interface AWEIMTableViewAction : NSObject

@property (copy, nonatomic) NSArray *indexPaths;
@property (nonatomic) SEL actionSelector;
@property (retain, nonatomic) id actionTarget;

- (id)configInvocation;
- (void)actionInvoke;
- (void).cxx_destruct;
- (long long)coefficient;

@end
