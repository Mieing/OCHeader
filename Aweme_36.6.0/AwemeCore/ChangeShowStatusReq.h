@class NSString;

@interface ChangeShowStatusReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *memberId;
@property (nonatomic) int showStatus;

+ (id)descriptor;

@end
