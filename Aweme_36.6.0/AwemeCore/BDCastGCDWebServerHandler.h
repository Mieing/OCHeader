@interface BDCastGCDWebServerHandler : NSObject

@property (readonly, nonatomic) id /* block */ matchBlock;
@property (readonly, nonatomic) id /* block */ asyncProcessBlock;

- (id)initWithMatchBlock:(id /* block */)a0 asyncProcessBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
