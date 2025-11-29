@class NSDictionary, ACCBDImageUploadService, NSMutableArray;

@interface AFDABCloneDataUploadHelper : NSObject

@property (retain, nonatomic) ACCBDImageUploadService *uploadService;
@property (retain, nonatomic) NSMutableArray *cloneItemArray;
@property (copy, nonatomic) NSDictionary *cloneData;

+ (id)cloneDatapath;
+ (id)collectABCloneData;
+ (id)buildABCloneDic;
+ (void)registerCloneWithKey:(id)a0 dataCollector:(id /* block */)a1;
+ (id)getCloneDataForKey:(id)a0;
+ (id)sharedInstance;

- (void)uploadABCloneDataToTosWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
