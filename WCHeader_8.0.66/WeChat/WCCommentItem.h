@class NSData, NSString, SnsEmojiInfoObj, WCTimelineExtBean, WCUploadMedia, WCUserComment, SnsCommentImageInfo, WCMomentsDragonCommentInfo;

@interface WCCommentItem : NSObject <NSCoding>

@property (retain, nonatomic) WCTimelineExtBean *extBean;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) int type;
@property (nonatomic) int source;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) WCUserComment *refComment;
@property (nonatomic) unsigned int inQueueTime;
@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *commmentID;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned int commentFlag;
@property (nonatomic) unsigned long long failedType;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *remindFriendsInfoData;
@property (retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj;
@property (retain, nonatomic) SnsCommentImageInfo *snsImageInfo;
@property (retain, nonatomic) WCUploadMedia *uploadMedia;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *wwFileID;
@property (retain, nonatomic) NSString *wwMediaUrl;
@property (retain, nonatomic) NSString *wwMediaMD5;
@property (nonatomic) long long commentCGIType;
@property (retain, nonatomic) NSString *commentFailedBtnUrl;
@property (retain, nonatomic) NSString *commentFailedBtnTitle;
@property (retain, nonatomic) WCMomentsDragonCommentInfo *dragonCommentInfo;
@property (nonatomic) int springFestivalYear;
@property (nonatomic) long long commentScene;

+ (id)genCommentObject:(id)a0 content:(id)a1 ref:(id)a2 source:(long long)a3 SnsEmojiInfoObj:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toServerObject;
- (void)makeImageToUploadMedia:(id)a0 block:(id /* block */)a1;
- (void)fetchSnsCommentImage:(id)a0 block:(id /* block */)a1;
- (void)saveImageToUploadMedia:(id)a0;
- (void)setAtFriendContact:(id)a0;
- (void).cxx_destruct;

@end
