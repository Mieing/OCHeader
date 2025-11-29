@class NSString;

@interface SpamRisk : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *spamJumpUrl;
@property (retain, nonatomic) NSString *spamRiskCopywriting;
@property (nonatomic) unsigned int notShowSpamRiskPrompt;
@property (nonatomic) unsigned int disableLiveGiftActivity;
@property (retain, nonatomic) NSString *spamLiveGiftActivityWording;

+ (void)initialize;

@end
