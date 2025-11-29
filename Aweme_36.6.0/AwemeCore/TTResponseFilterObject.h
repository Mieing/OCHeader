@class NSString;

@interface TTResponseFilterObject : NSObject

@property (copy, nonatomic) NSString *responseFilterName;
@property (copy, nonatomic) id /* block */ responseFilterBlock;

- (id)initWithName:(id)a0 responseFilterBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
