@class NSString, NSMutableArray;

@interface BackupEmojiOperateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *md5List;
@property (nonatomic) unsigned int opcode;
@property (nonatomic) unsigned int panelType;
@property (retain, nonatomic) NSString *insertPositionMd5;
@property (retain, nonatomic) NSString *versionKey;
@property (retain, nonatomic) NSString *updateVersionKey;

+ (void)initialize;

@end
