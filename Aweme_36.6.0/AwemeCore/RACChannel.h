@class RACChannelTerminal;

@interface RACChannel : NSObject

@property (readonly, nonatomic) RACChannelTerminal *leadingTerminal;
@property (readonly, nonatomic) RACChannelTerminal *followingTerminal;

- (void).cxx_destruct;
- (id)init;

@end
