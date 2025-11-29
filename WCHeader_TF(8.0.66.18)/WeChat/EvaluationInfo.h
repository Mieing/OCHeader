@class NSString, MediaList, NSData, SellerReplyInfo;

@interface EvaluationInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *evaluationId;
@property (retain, nonatomic) NSString *orderId;
@property (nonatomic) unsigned long long spuId;
@property (nonatomic) unsigned long long skuId;
@property (nonatomic) unsigned int evaluationType;
@property (nonatomic) unsigned int evaluationLevel;
@property (retain, nonatomic) NSData *content;
@property (retain, nonatomic) MediaList *mediaList;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int isAnonymous;
@property (retain, nonatomic) SellerReplyInfo *sellerReply;

+ (void)initialize;

@end
