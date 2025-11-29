@class NSString;

@interface VoIPMPAudioDevice : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSString *id;

+ (void)initialize;

@end
