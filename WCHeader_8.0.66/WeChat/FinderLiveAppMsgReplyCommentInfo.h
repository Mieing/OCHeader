@class NSString, FinderPostLiveMsgReportInfo, NSData;

@interface FinderLiveAppMsgReplyCommentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) FinderPostLiveMsgReportInfo *reportInfo;
@property (retain, nonatomic) NSString *referProductQuestionCardId;
@property (nonatomic) BOOL needStick;
@property (nonatomic) unsigned int stickType;
@property (nonatomic) unsigned int replyType;
@property (retain, nonatomic) NSString *emojiMd5;
@property (retain, nonatomic) NSData *emoticonBuffer;
@property (nonatomic) unsigned int replyOriginalMsgType;

+ (void)initialize;

@end
