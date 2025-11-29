@class IESPortraitThreadSafeDictionary;

@interface IESPortraitProducerDataManager : NSObject

@property (nonatomic) BOOL someSaveDataNotLoad;
@property (retain, nonatomic) IESPortraitThreadSafeDictionary *portraits;
@property (retain, nonatomic) IESPortraitThreadSafeDictionary *keysConfig;

+ (id)sharedInstance;

- (void)configKey:(id)a0 config:(id)a1;
- (BOOL)putKey:(id)a0 withValue:(id)a1;
- (id)initWithProducer:(id)a0;
- (id)loadSavePortraitDataKey:(id)a0 config:(id)a1;
- (void)checkSaveLoadStatus;
- (void)loadSaveData;
- (id)getPortraitWithKey:(id)a0;
- (id)getAllPortrait;
- (BOOL)putKey:(id)a0 withStringValue:(id)a1;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;
- (id)allKeys;

@end
