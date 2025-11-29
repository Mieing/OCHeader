@class NSString, NSMutableArray;

@interface IESLiveKtvProfitGroupChorusInviteFriendResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *successUidsArray;
@property (readonly, nonatomic) unsigned long long successUidsArray_Count;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) NSMutableArray *successOpenIdsArray;
@property (readonly, nonatomic) unsigned long long successOpenIdsArray_Count;

+ (id)descriptor;

@end
