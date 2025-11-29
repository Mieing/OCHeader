@class NSMutableDictionary;

@interface MMDiskExptConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *configDic;

- (id)init;
- (void)loadAllExptConfig;
- (id)getCacheKeyFromFullPath:(id)a0;
- (int)getStoreTimeFromExpt:(id)a0;
- (void).cxx_destruct;

@end
