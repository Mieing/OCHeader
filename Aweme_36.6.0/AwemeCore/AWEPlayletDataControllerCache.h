@class NSMutableArray, NSMutableDictionary;

@interface AWEPlayletDataControllerCache : NSObject

@property (nonatomic) long long cacheSize;
@property (retain, nonatomic) NSMutableArray *itemIdArray;
@property (retain, nonatomic) NSMutableDictionary *controllerDic;

+ (id)sharedInstance;

- (void)cacheDataController:(id)a0 byItemId:(id)a1;
- (id)dataControllerWithItemId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
