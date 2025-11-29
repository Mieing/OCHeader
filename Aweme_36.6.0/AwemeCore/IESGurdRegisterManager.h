@class NSMutableDictionary;

@interface IESGurdRegisterManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *registerModelsDictionary;

+ (id)sharedManager;

- (void)registerAccessKey:(id)a0;
- (void)registerAccessKey:(id)a0 SDKVersion:(id)a1;
- (void)addCustomParamsForAccessKey:(id)a0 customParams:(id)a1;
- (id)allRegisterModels;
- (BOOL)isAccessKeyRegistered:(id)a0;
- (id)registerModelWithAccessKey:(id)a0;
- (id)allAccessKeys;
- (void).cxx_destruct;

@end
