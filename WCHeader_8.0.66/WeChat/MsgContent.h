@class ChatroomMsgTpl, ChatroomMsgImgCard, ChatroomMsgImage, ChatroomMsgShareLink, ChatroomMsgNotice, ChatroomMsgSheetCard, ChatroomMsgEmoji, ChatroomMsgImgLink, ChatroomMsgApp, ChatroomMsgSys, ChatroomMsgText;

@interface MsgContent : WXPBGeneratedMessage

@property (retain, nonatomic) ChatroomMsgApp *chatroomApp;
@property (retain, nonatomic) ChatroomMsgTpl *chatroomTpl;
@property (retain, nonatomic) ChatroomMsgText *chatroomText;
@property (retain, nonatomic) ChatroomMsgSys *chatroomSys;
@property (retain, nonatomic) ChatroomMsgNotice *chatroomNotice;
@property (retain, nonatomic) ChatroomMsgEmoji *chatroomEmoji;
@property (retain, nonatomic) ChatroomMsgImgLink *chatroomImgLink;
@property (retain, nonatomic) ChatroomMsgShareLink *chatroomShareLink;
@property (retain, nonatomic) ChatroomMsgImgCard *chatroomImgCard;
@property (retain, nonatomic) ChatroomMsgImage *chatroomImage;
@property (retain, nonatomic) ChatroomMsgSheetCard *chatroomSheetCard;

+ (void)initialize;

@end
