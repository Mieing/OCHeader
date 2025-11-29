@class NSMutableDictionary;

@interface AWEBizTabBarLightModeFlags : NSObject

@property (retain, nonatomic) NSMutableDictionary *flagsDictionary;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long modeType;

- (id)initModeType:(long long)a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
