@class NSString, NSNumber;

@interface AWELeftSlidPredictConfigModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) BOOL forceInsert;
@property (nonatomic) BOOL similarRecommend;
@property (nonatomic) long long usePredictProduct;
@property (retain, nonatomic) NSString *trafficFrom;
@property (retain, nonatomic) NSString *sameBlockName;
@property (retain, nonatomic) NSString *sameSceneId;
@property (retain, nonatomic) NSString *tabId;
@property (retain, nonatomic) NSString *isStronglyRecommend;
@property (nonatomic) long long maxStoreProNum;
@property (nonatomic) long long validityTime;
@property (retain, nonatomic) NSNumber *threshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
