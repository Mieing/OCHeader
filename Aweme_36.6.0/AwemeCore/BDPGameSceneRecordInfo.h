@class NSString, BDPUniqueID, BDPThreadSafeDictionary;

@interface BDPGameSceneRecordInfo : NSObject

@property (retain, nonatomic) BDPThreadSafeDictionary *firstSceneInfo;
@property (retain, nonatomic) BDPThreadSafeDictionary *topSceneInfo;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL reportedFirstSceneEvent;
@property (retain, nonatomic) NSString *routeID;
@property (nonatomic) long long sceneCount;

- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
