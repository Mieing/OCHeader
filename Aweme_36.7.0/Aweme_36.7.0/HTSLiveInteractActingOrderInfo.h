@class NSString, NSMutableArray, HTSLiveInteractActingOrderInfo_User;

@interface HTSLiveInteractActingOrderInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *orderId;
@property (retain, nonatomic) HTSLiveInteractActingOrderInfo_User *fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (retain, nonatomic) NSMutableArray *actUsersArray;
@property (readonly, nonatomic) unsigned long long actUsersArray_Count;

+ (id)descriptor;

@end
