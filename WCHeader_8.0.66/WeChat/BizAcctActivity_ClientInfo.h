@class NSString, EcsJumpInfo;

@interface BizAcctActivity_ClientInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *lotteryTitle;
@property (retain, nonatomic) NSString *lotteryWelcomeWording;
@property (retain, nonatomic) NSString *productNameWording;
@property (retain, nonatomic) NSString *prizeCountWording;
@property (retain, nonatomic) NSString *participateCountWording;
@property (retain, nonatomic) NSString *activityEndTimeWording;
@property (retain, nonatomic) NSString *activityStartTimeWording;
@property (retain, nonatomic) NSString *extWoding;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *joinSuccWording;
@property (retain, nonatomic) NSString *joinFailWording;
@property (retain, nonatomic) EcsJumpInfo *productDetailJumpInfo;
@property (retain, nonatomic) EcsJumpInfo *presentOrderJumpInfo;
@property (retain, nonatomic) NSString *privacyPolicy;
@property (retain, nonatomic) NSString *notStartFailWording;
@property (retain, nonatomic) NSString *liveReservationWording;
@property (retain, nonatomic) EcsJumpInfo *finderProfileJumpInfo;

+ (void)initialize;

@end
