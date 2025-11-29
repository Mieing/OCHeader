@class NSString, NSNumber, NSDictionary;

@interface AWEXBridgeEccsTrackCardButtonTapAndTransferMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *buttonName;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *materialName;
@property (copy, nonatomic) NSString *unitBtmId;
@property (retain, nonatomic) NSNumber *enterNewPage;
@property (retain, nonatomic) NSNumber *needSetBcm;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *messageClientId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *customBizId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSDictionary *extParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
