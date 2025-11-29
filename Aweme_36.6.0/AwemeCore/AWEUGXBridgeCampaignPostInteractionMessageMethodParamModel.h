@class NSString, NSNumber;

@interface AWEUGXBridgeCampaignPostInteractionMessageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *useDefault;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *sceneType;
@property (retain, nonatomic) NSNumber *defaultDigg;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long replyDisplayType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
