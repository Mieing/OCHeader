@class BDECPigeonEvaluateRequestModelV2, NSString, NSDictionary;

@interface AWEECOMIMPaasEvaluateRequestModelNew : NSObject <AWEECOMIMPaasEvaluateRequestModelProtocol>

@property (retain, nonatomic) BDECPigeonEvaluateRequestModelV2 *evaluateRequestModel;
@property (copy, nonatomic) NSString *bizConversationId;
@property (copy, nonatomic) NSString *stars;
@property (copy, nonatomic) NSString *talkId;
@property (copy, nonatomic) NSString *pigeonCid;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *serverMessageId;
@property (copy, nonatomic) NSString *commentTag;
@property (copy, nonatomic) NSString *bizCommentExt;
@property (copy, nonatomic) NSString *remark;
@property (copy, nonatomic) NSDictionary *commentDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertToPigeonEvaluateRequestModel;
- (void).cxx_destruct;

@end
