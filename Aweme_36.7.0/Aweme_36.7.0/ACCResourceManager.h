@class NSString, NSArray;

@interface ACCResourceManager : NSObject

@property (copy, nonatomic) NSString *imageChannel;
@property (copy, nonatomic) NSString *fileChannel;
@property (retain, nonatomic) NSArray *pngChannelRootPaths;
@property (retain, nonatomic) NSArray *fileChannelRootPaths;
@property (copy, nonatomic) NSString *targetName;
@property (copy, nonatomic) NSString *resourceSecretKey;
@property (nonatomic) BOOL requestedPriorityNormal;
@property (copy, nonatomic) NSString *scaleType;

+ (id)sharedInstance;

- (id)getImageFromCloud:(id)a0;
- (void)getImageWithImageName:(id)a0 completion:(id /* block */)a1;
- (void)trackResourceWithEvent:(id)a0 success:(BOOL)a1 error:(id)a2;
- (id)getFilePathFromCloud:(id)a0;
- (void)requestPriorityNormalResources;
- (void)getFilePathWithFileName:(id)a0 completion:(id /* block */)a1;
- (void)prepareGeckoEnviroment;
- (void).cxx_destruct;

@end
