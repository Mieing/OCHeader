@class NSString;

@interface HTSLiveLinkmicProfitBidPaidLinkmicAbortContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *winUserId;
@property (copy, nonatomic) NSString *anchorToast;
@property (copy, nonatomic) NSString *winUserToast;
@property (copy, nonatomic) NSString *otherBidUsersToast;

+ (id)descriptor;

@end
