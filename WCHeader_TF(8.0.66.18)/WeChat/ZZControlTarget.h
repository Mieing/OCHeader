@interface ZZControlTarget : NSObject

@property (copy, nonatomic) id /* block */ senderBlock;
@property (nonatomic) unsigned long long controlEvents;

- (id)initWithSenderBlock:(id /* block */)a0 controlEvents:(unsigned long long)a1;
- (void)senderMethod:(id)a0;
- (void).cxx_destruct;

@end
