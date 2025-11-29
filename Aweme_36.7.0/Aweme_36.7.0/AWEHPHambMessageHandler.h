@interface AWEHPHambMessageHandler : NSObject

@property (copy, nonatomic) id /* block */ newMessageBlock;

- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)setup;

@end
