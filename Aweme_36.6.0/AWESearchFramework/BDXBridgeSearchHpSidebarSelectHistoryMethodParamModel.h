@class NSNumber, NSString;

@interface BDXBridgeSearchHpSidebarSelectHistoryMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *sceneType;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSNumber *queryTimestamp;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
