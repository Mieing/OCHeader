@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeImShowJoinGroupPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *needTransferToGroup;
@property (retain, nonatomic) NSNumber *closeWhenJoinFail;
@property (retain, nonatomic) NSNumber *dontShowToast;
@property (copy, nonatomic) NSString *customizedButtonTitle;
@property (copy, nonatomic) NSDictionary *extraMobs;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
