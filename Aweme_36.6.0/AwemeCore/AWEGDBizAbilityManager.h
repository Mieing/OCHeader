@class NSMutableDictionary;

@interface AWEGDBizAbilityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *bizAbilityDictionary;

+ (void)_aweLazyRegisterLoad;
+ (id)manager;

- (id)getAbilityByBizCode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)initData;

@end
