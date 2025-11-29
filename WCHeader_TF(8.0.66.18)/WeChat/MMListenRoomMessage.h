@class NSString, MMListenUserInfo, MMListenItem;

@interface MMListenRoomMessage : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) MMListenUserInfo *fromUser;
@property (retain, nonatomic) MMListenUserInfo *toUser;
@property (retain, nonatomic) NSString *listenListUuid;
@property (retain, nonatomic) MMListenItem *chatRoomBubbleItem;
@property (nonatomic) unsigned int cheerCount;
@property (nonatomic) BOOL isFromDj;

+ (void)initialize;

@end
