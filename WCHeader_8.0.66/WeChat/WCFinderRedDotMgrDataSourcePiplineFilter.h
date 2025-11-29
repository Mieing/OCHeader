@class NSString;

@interface WCFinderRedDotMgrDataSourcePiplineFilter : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ filterBlock;

- (id)initWithName:(id)a0 filterBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
