@class NSString, AWEPOIFeedUgcReplyUserInfoModel;

@interface AWEPOIFeedUgcReplyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *replyID;
@property (nonatomic) unsigned long long replyLevel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *rateID;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *replyObjectID;
@property (retain, nonatomic) AWEPOIFeedUgcReplyUserInfoModel *replierUserInfo;
@property (retain, nonatomic) AWEPOIFeedUgcReplyUserInfoModel *replieeUserInfo;
@property (copy, nonatomic) NSString *publishedTime;
@property (nonatomic) BOOL isMerchantReply;
@property (nonatomic) BOOL belongsToCurrentUser;
@property (nonatomic) BOOL isAnonymous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
