@class NSString;

@interface PanelEmojiCtx : WXPBGeneratedMessage

@property (nonatomic) unsigned int messageType;
@property (nonatomic) unsigned int appMessageInnerType;
@property (nonatomic) unsigned int payInfoScene;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) unsigned int isSelf;
@property (retain, nonatomic) NSString *lensId;
@property (nonatomic) unsigned int isRelatedEmoticon;

+ (void)initialize;

@end
