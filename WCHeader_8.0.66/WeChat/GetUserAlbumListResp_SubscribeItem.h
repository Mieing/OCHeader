@class NSString, NSMutableArray, NSData;

@interface GetUserAlbumListResp_SubscribeItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *tagBuf;
@property (retain, nonatomic) NSMutableArray *appmsgList;
@property (nonatomic) unsigned int isPublicTag;
@property (retain, nonatomic) NSString *oldTitle;
@property (retain, nonatomic) NSString *bizNickname;
@property (nonatomic) unsigned int totalAppmsgCount;
@property (nonatomic) unsigned long long albumId;
@property (nonatomic) unsigned int isPayAlbum;
@property (nonatomic) unsigned int deleteStatus;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int coverBan;
@property (nonatomic) unsigned int isUpdating;
@property (nonatomic) unsigned int unreadCount;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int subtype;
@property (retain, nonatomic) NSData *biz;

+ (void)initialize;

@end
