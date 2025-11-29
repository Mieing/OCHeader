@class NSString, NSNumber;

@interface BDXBridgeLifeOpenHotRankDetailBasicParams : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *bizType;
@property (retain, nonatomic) NSNumber *sceneType;
@property (retain, nonatomic) NSNumber *initialCursor;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *extraParams;
@property (copy, nonatomic) NSString *trackerData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
