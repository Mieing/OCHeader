@class NSString;

@interface HTSLiveCameraPaidInfo_PaidLiveBizExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *ticketPanelSixJumpURL;
@property (nonatomic) BOOL isReplay;
@property (copy, nonatomic) NSString *paidConversionJumpURL;
@property (copy, nonatomic) NSString *prepayCashierJumpURL;

+ (id)descriptor;

@end
