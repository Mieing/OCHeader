@class FinderLiveMsg, FinderLiveAppMsg, NSString;

@interface FinderLiveAppMsgLikeMsgNotifyInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int originMsgKind;
@property (retain, nonatomic) FinderLiveMsg *originMsg;
@property (retain, nonatomic) FinderLiveAppMsg *originAppMsg;
@property (retain, nonatomic) NSString *bgColor;

+ (void)initialize;

@end
