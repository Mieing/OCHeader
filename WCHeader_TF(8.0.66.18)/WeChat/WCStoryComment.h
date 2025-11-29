@class NSString;

@interface WCStoryComment : NSObject <PBCoding>

@property (nonatomic) unsigned long long commentHash;
@property (retain, nonatomic) NSString *tid;
@property (nonatomic) BOOL isUnRead;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *commentId;
@property (nonatomic) unsigned int isNotRichText;
@property (retain, nonatomic) NSString *replyCommentId;
@property (retain, nonatomic) NSString *replyUserName;
@property (nonatomic) unsigned int deleteFlag;
@property (nonatomic) unsigned int commentFlag;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int inQueueTime;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) long long errorType;
@property (nonatomic) BOOL isDoubleClickBubble;
@property (nonatomic) unsigned int objCreateTime;
@property (retain, nonatomic) WCStoryComment *replyComment;
@property (nonatomic) unsigned int type;
@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) NSString *realNickName;
@property (readonly, copy, nonatomic) NSString *replyNickName;
@property (readonly, copy, nonatomic) NSString *disPlayNickName;
@property (readonly, copy, nonatomic) NSString *disPlayReplyNickName;
@property (nonatomic) unsigned int previewEnterScene;
@property (nonatomic) unsigned int profileSource;
@property (nonatomic) BOOL isPosting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_commentId;
+ (void)PBArrayAdd_isNotRichText;
+ (void)PBArrayAdd_replyCommentId;
+ (void)PBArrayAdd_replyUserName;
+ (void)PBArrayAdd_deleteFlag;
+ (void)PBArrayAdd_commentFlag;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_inQueueTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_errorType;
+ (void)PBArrayAdd_isDoubleClickBubble;
+ (void)PBArrayAdd_objCreateTime;
+ (void)PBArrayAdd_replyComment;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_isPosting;
+ (void)initialize;
+ (id)storyCommentFromServerObj:(id)a0;
+ (id)storyCommentFromSyncMsgDetail:(id)a0;
+ (id)nickNameOfUserName:(id)a0;
+ (id)displayNameOfNickName:(id)a0 maxLength:(unsigned long long)a1;

- (id)getPBPropertyTable;
- (id)toServerObject;
- (BOOL)isValid;
- (BOOL)isBubble;
- (BOOL)isVisitRecord;
- (unsigned int)getCommentType;
- (BOOL)isPostBySelf;
- (BOOL)isEqualToComment:(id)a0;
- (void).cxx_destruct;

@end
