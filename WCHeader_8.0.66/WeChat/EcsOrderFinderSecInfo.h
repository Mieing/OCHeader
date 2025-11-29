@class NSString;

@interface EcsOrderFinderSecInfo : WXPBGeneratedMessage

@property (nonatomic) int decision;
@property (retain, nonatomic) NSString *interceptUrl;
@property (retain, nonatomic) NSString *modalTitle;
@property (retain, nonatomic) NSString *warningContent;
@property (retain, nonatomic) NSString *modalContinueBtnWording;
@property (retain, nonatomic) NSString *modalCancelBtnWording;
@property (nonatomic) unsigned int lockAddress;
@property (nonatomic) unsigned int reducePaymentDuration;

+ (void)initialize;

@end
