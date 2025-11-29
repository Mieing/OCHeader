@class NSString, HTSLiveChestCardInfo;

@interface HTSLiveChestOpenedInfo_WinningUser : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (retain, nonatomic) HTSLiveChestCardInfo *chestCard;
@property (nonatomic) BOOL hasChestCard;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end
