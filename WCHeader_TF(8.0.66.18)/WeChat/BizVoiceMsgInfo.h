@class NSString;

@interface BizVoiceMsgInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int fileId;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int voiceLength;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *voiceId;
@property (retain, nonatomic) NSString *contentUrl;

+ (void)initialize;

@end
