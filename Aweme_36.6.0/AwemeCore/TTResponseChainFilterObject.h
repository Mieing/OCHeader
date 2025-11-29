@class NSString;

@interface TTResponseChainFilterObject : NSObject

@property (copy, nonatomic) NSString *responseChainFilterName;
@property (copy, nonatomic) id /* block */ responseChainFilterBlock;

- (id)initWithName:(id)a0 responseChainFilterBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
