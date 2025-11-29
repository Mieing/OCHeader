@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface AWESearchAIGCStreamDataCache : NSObject

@property (copy, nonatomic) NSDictionary *copilotRenderModel;
@property (copy, nonatomic) NSDictionary *copilotDataModel;
@property (copy, nonatomic) NSDictionary *copilotRawData;
@property (retain, nonatomic) NSMutableDictionary *dataCache;
@property (retain, nonatomic) NSMutableSet *uniqueKeys;

+ (id)sharedInstance;

- (id)dataListForKey:(id)a0;
- (void).cxx_destruct;

@end
