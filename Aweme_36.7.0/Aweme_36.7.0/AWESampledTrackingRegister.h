@class NSMutableDictionary;

@interface AWESampledTrackingRegister : NSObject

@property (retain, nonatomic) NSMutableDictionary *configs;

- (void)registerEvents;
- (void)registerEvent:(id)a0 config:(id)a1;
- (id)configForEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
