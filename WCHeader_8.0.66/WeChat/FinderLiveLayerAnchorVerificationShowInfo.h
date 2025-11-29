@class NSString;

@interface FinderLiveLayerAnchorVerificationShowInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int verifyMode;
@property (retain, nonatomic) NSString *verifyWording;
@property (retain, nonatomic) NSString *verificationId;
@property (nonatomic) unsigned int remainingSeconds;
@property (retain, nonatomic) NSString *verifyUrl;
@property (retain, nonatomic) NSString *verifyButtonWording;
@property (retain, nonatomic) NSString *verifyWordingTitle;
@property (nonatomic) unsigned int verifyButtonColdingSeconds;
@property (retain, nonatomic) NSString *verifyButtonWordingNew;
@property (nonatomic) unsigned int verifyCountDownSeconds;
@property (retain, nonatomic) NSString *verifyCountDownWording;
@property (nonatomic) unsigned int verifyTotalRemainingSeconds;
@property (nonatomic) unsigned int verifyButtonColdingRemainSeconds;
@property (nonatomic) unsigned int verifyCountDownReaminSeconds;
@property (retain, nonatomic) NSString *limitPageTitle;
@property (retain, nonatomic) NSString *limitPageWording;
@property (retain, nonatomic) NSString *limitPageButtonWording;
@property (retain, nonatomic) NSString *verifyShortWording;

+ (void)initialize;

@end
