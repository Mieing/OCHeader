@class NSString, NSMutableArray, CdnChatting;

@interface CdnC2cTiledUpload : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *touser;
@property (nonatomic) BOOL enableHitcheck;
@property (retain, nonatomic) CdnChatting *chat;
@property (retain, nonatomic) NSMutableArray *files;

+ (void)initialize;

@end
