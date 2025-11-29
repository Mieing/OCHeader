@class NSData, NSMutableArray;

@interface BatchEmojiDownLoadRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) NSMutableArray *reqMd5;
@property (nonatomic) unsigned int panelType;
@property (retain, nonatomic) NSData *reqBuff;
@property (retain, nonatomic) NSData *syncParam;

+ (void)initialize;

@end
