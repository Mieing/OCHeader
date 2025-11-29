@class NSString, NSArray, HTSLiveCleanStrategy, NSNumber;

@interface HTSLiveGiftSyncModel : IESLiveDynamicModel

@property (retain, nonatomic) NSNumber *resourceID;
@property (copy, nonatomic) NSString *resourceURI;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) NSString *localMD5;
@property (retain, nonatomic) NSNumber *localFileSize;
@property (nonatomic) int resourceType;
@property (nonatomic) unsigned long long downloaderUsed;
@property (retain, nonatomic) HTSLiveCleanStrategy *cleanStrategy;
@property (nonatomic) double dequeueTime;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) BOOL isAnchor;

- (id)resourcePath;
- (void)setResourcePath:(id)a0;
- (id)md5;
- (id)resourceID;
- (void)setMd5:(id)a0;
- (void)setResourceID:(id)a0;
- (void).cxx_destruct;

@end
