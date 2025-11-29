@class NSString, NSDictionary;

@interface BDECPigeonEvaluateRequestModelV2 : NSObject

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

- (void).cxx_destruct;

@end
