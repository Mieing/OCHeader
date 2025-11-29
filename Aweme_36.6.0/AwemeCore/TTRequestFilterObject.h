@class NSString;

@interface TTRequestFilterObject : NSObject

@property (copy, nonatomic) NSString *requestFilterName;
@property (copy, nonatomic) id /* block */ requestFilterBlock;

- (id)initWithName:(id)a0 requestFilterBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
