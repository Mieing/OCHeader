@interface IESIMUITextViewDeallocHelper : NSObject

@property (copy, nonatomic) id /* block */ iesim_deallocBlock;

- (void).cxx_destruct;
- (void)dealloc;

@end
