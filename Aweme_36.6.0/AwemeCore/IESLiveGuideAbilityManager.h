@class NSMutableDictionary;

@interface IESLiveGuideAbilityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *guideAbilityServices;

- (id)getAllGuideAbilityServices;
- (void)saveGuideAbilityServices:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
