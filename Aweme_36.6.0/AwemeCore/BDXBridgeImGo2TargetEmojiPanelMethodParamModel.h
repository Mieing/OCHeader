@class NSString, BDXBridgeImGo2TargetEmojiPanelLogMap;

@interface BDXBridgeImGo2TargetEmojiPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationShortId;
@property (copy, nonatomic) NSString *resourceId;
@property (retain, nonatomic) BDXBridgeImGo2TargetEmojiPanelLogMap *logMap;
@property (nonatomic) long long stickerType;

+ (id)requiredKeyPaths;
+ (id)logMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
