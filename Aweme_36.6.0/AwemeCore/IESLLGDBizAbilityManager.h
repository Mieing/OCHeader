@class NSMutableDictionary;

@interface IESLLGDBizAbilityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *bizAbilityDictionary;

+ (id)manager;

- (id)getAbilityByBizCode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)initData;

@end
