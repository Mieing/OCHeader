@class NSString, NSData, FinderLiveContact;

@interface FinderLiveMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int likeCnt;
@property (retain, nonatomic) FinderLiveContact *finderLiveContact;
@property (retain, nonatomic) NSString *localClientMsgId;
@property (retain, nonatomic) NSData *extInfo;
@property (retain, nonatomic) FinderLiveContact *toFinderLiveContact;
@property (nonatomic) unsigned int isFloatmsg;
@property (nonatomic) unsigned int floatType;
@property (retain, nonatomic) NSString *referFloatProductId;
@property (nonatomic) BOOL isStickMsg;
@property (nonatomic) unsigned int stickType;
@property (nonatomic) BOOL isShortcutWording;
@property (nonatomic) unsigned int shortcutWordingType;

+ (void)initialize;

@end
