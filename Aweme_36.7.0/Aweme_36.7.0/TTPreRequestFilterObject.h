@class NSString;

@interface TTPreRequestFilterObject : NSObject

@property (copy, nonatomic) NSString *preRequestFilterName;
@property (copy, nonatomic) id /* block */ preRequestFilterBlock;

- (id)initWithName:(id)a0 preRequestFilterBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
