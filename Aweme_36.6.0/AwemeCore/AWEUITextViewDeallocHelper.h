@interface AWEUITextViewDeallocHelper : NSObject

@property (copy, nonatomic) id /* block */ awe_deallocBlock;

- (void).cxx_destruct;
- (void)dealloc;

@end
