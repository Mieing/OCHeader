@interface IESBridgeDeallocFlag : NSObject

@property (copy, nonatomic) id /* block */ deallocBlock;

- (void).cxx_destruct;
- (void)dealloc;

@end
