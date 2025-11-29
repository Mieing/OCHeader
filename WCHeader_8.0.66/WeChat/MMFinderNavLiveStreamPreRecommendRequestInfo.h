@class NSString;

@interface MMFinderNavLiveStreamPreRecommendRequestInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long requestTimeMs;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *reddotTipsUUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_requestTimeMs;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_reddotTipsUUid;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
