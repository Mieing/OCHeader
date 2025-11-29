@class NSMutableArray;

@interface IESLiveGeneralServiceRegister : NSObject

@property (retain, nonatomic) NSMutableArray *serviceClasses;

+ (id)register;

- (void)loadActionRegistry;
- (void).cxx_destruct;
- (id)init;
- (id)registerClasses;

@end
