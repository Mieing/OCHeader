@class IESForestExpiringObjectSet;

@interface IESForestGeckoUtil : NSObject

@property (retain, nonatomic) IESForestExpiringObjectSet *recentUpdatedChannels;

+ (void)syncChannel:(id)a0 accessKey:(id)a1 modelActivePolicy:(long long)a2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
