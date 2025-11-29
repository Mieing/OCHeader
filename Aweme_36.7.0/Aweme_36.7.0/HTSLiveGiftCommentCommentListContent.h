@class NSString;

@interface HTSLiveGiftCommentCommentListContent : IESLivePBBaseMessage

@property (nonatomic) int changeType;
@property (nonatomic) long long total;
@property (copy, nonatomic) NSString *watchingListUserToast;
@property (nonatomic) long long operatorUserId;
@property (copy, nonatomic) NSString *operatorUserOpenId;

+ (id)descriptor;

@end
