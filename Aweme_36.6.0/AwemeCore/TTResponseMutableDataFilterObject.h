@class NSString;

@interface TTResponseMutableDataFilterObject : NSObject

@property (copy, nonatomic) NSString *responseMutableDataFilterName;
@property (copy, nonatomic) id /* block */ responseMutableDataFilterBlock;

- (id)initWithName:(id)a0 responseMutableDataFilterBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
