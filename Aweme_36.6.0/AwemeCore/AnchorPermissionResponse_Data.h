@class NSString, GPBStringBoolDictionary;

@interface AnchorPermissionResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL canCreatePaidLive;
@property (copy, nonatomic) NSString *paidLivePermission;
@property (nonatomic) BOOL replayRight;
@property (retain, nonatomic) GPBStringBoolDictionary *rightDetails;
@property (readonly, nonatomic) unsigned long long rightDetails_Count;
@property (nonatomic) BOOL hasSubscription;
@property (nonatomic) BOOL canCreatePackageTicket;
@property (nonatomic) BOOL canCreateVipLive;
@property (nonatomic) BOOL openPaidLiveSubscribeMemberFree;
@property (nonatomic) BOOL canCreatePaidLiveCurrent;

+ (id)descriptor;

@end
