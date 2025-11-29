@interface HTSLiveAnchorUpdateLinkmicConfigContent : IESLivePBBaseMessage

@property (nonatomic) BOOL forbidInviteByGeneral;
@property (nonatomic) BOOL forbidApplyFromOther;

+ (id)descriptor;

@end
