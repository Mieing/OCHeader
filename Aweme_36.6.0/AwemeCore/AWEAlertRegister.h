@class NSArray;

@interface AWEAlertRegister : NSObject

@property (copy, nonatomic) NSArray *registerItems;

+ (id)sharedRegister;

- (void)p_addRegisterItemWithItem:(id)a0;
- (void)addRegisterItem:(id /* block */)a0;
- (void).cxx_destruct;

@end
