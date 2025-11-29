@class NSMutableDictionary;

@interface AWEIMLightInteractionDataProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *configDict;

- (id)allConfigs;
- (id)configWithName:(id)a0;
- (BOOL)isValidConfigV2:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
