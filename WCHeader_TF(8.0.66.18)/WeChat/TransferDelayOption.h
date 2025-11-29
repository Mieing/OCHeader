@class NSString;

@interface TransferDelayOption : WXPBGeneratedMessage

@property (nonatomic) unsigned int delayOptionScene;
@property (retain, nonatomic) NSString *delayOptionTitle;
@property (retain, nonatomic) NSString *delayOptionDesc;
@property (nonatomic) unsigned int isSupported;

+ (void)initialize;

@end
