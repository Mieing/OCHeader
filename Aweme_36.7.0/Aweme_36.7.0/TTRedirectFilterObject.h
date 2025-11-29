@class NSString;

@interface TTRedirectFilterObject : NSObject

@property (copy, nonatomic) NSString *redirectFilterName;
@property (copy, nonatomic) id /* block */ redirectFilterBlock;

- (id)initWithName:(id)a0 redirectFilterBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
