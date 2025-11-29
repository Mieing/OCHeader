@class NSString, NSMutableArray;

@interface AWERLStringBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *lines;
@property (copy, nonatomic) NSString *prefixString;
@property (copy, nonatomic) NSString *indentation;
@property (nonatomic) long long depth;

- (void)appendLine:(id)a0;
- (void)buildWithIncreaseIndent:(id /* block */)a0;
- (void)decreaseDepth;
- (void).cxx_destruct;
- (id)init;
- (id)buildString;
- (void)increaseDepth;

@end
