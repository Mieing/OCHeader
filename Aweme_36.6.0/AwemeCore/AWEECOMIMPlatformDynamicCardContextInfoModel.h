@class NSString, NSDictionary, AWEECOMIMPlatformDynamicCardContextConversationInfoModel, AWEECOMIMPlatformDynamicCardContextMessageInfoModel, AWEECOMIMPlatformDynamicCardContextReportEventParamsModel, AWEECOMIMPlatformDynamicCardContextAppInfoModel;

@interface AWEECOMIMPlatformDynamicCardContextInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSDictionary *cardHeader;
@property (retain, nonatomic) AWEECOMIMPlatformDynamicCardContextConversationInfoModel *conversationInfoModel;
@property (retain, nonatomic) AWEECOMIMPlatformDynamicCardContextMessageInfoModel *messageInfoModel;
@property (retain, nonatomic) AWEECOMIMPlatformDynamicCardContextReportEventParamsModel *reportEventParamsModel;
@property (retain, nonatomic) AWEECOMIMPlatformDynamicCardContextAppInfoModel *appInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conversationInfoModelJSONTransformer;
+ (id)messageInfoModelJSONTransformer;
+ (id)reportEventParamsModelJSONTransformer;
+ (id)appInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
