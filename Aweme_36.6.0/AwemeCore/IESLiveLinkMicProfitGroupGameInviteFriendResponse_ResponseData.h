@class NSString, NSMutableArray;

@interface IESLiveLinkMicProfitGroupGameInviteFriendResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *successUidsArray;
@property (readonly, nonatomic) unsigned long long successUidsArray_Count;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
