@class NSString, CdnAssortedFile, CdnChatting;

@interface CdnC2cUpload : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *touser;
@property (nonatomic) BOOL enableHitcheck;
@property (retain, nonatomic) CdnChatting *chat;
@property (retain, nonatomic) CdnAssortedFile *file;

+ (void)initialize;

@end
