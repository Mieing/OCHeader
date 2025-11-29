@class NSString, NSNumber;

@interface BDXBridgeSearchHpSidebarDeleteSingleHistoryDeleteSingle : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSNumber *sceneType;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *query;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
