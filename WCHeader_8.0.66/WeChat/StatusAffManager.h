@class StatusCgiManager, NSString, StatusLogicCommentManager, StatusXmlParseManager, StatusStorageManager;

@interface StatusAffManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) StatusStorageManager *manager;
@property (retain, nonatomic) StatusLogicCommentManager *affStatusLogicCommentManager;
@property (retain, nonatomic) StatusXmlParseManager *statusXmlParseManager;
@property (retain, nonatomic) StatusCgiManager *cgiManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseStatusModelXml:(id)a0;
- (id)parseNewModifyStatusXml:(id)a0;
- (id)parseStatusCgiData:(id)a0 userName:(id)a1;
- (BOOL)isLikeTextState:(id)a0;
- (BOOL)performSelfLike:(id)a0 isLike:(BOOL)a1;
- (BOOL)insertLike:(id)a0;
- (BOOL)deleteLikeByCommentId:(id)a0 sequence:(unsigned long long)a1;
- (id)getLikeInfoByStatusId:(id)a0 limit:(unsigned int)a1;
- (BOOL)insertComment:(id)a0;
- (BOOL)removeComment:(id)a0 sequence:(unsigned long long)a1;
- (BOOL)deleteMessage:(id)a0;
- (BOOL)markAllMessageRead;
- (BOOL)clearAllMessage;
- (unsigned int)getCommentCount:(id)a0;
- (id)getAllMessage:(BOOL)a0;
- (id)getMessageByCondition:(unsigned int)a0 isUnread:(BOOL)a1 maxCreateTime:(unsigned long long)a2;
- (BOOL)markAllMessageNotify;
- (unsigned int)getToNotifyCount;
- (void)getCustomIconRecommendData:(id)a0 callback:(id /* block */)a1;
- (void)initAffManager;
- (void)onServiceInit;
- (id)createStatusIconInitInfo;
- (void)constructStatusInfoCache;
- (id)getStatusInfoListCache;
- (id)insertOrReplaceInfo:(id)a0;
- (id)selectStatusInfoWithUsername:(id)a0 count:(int)a1 offset:(int)a2 timeMsLimit:(long long)a3;
- (id)selectStatusInfoWithStatusId:(id)a0;
- (id)deleteStatusInfoWithId:(id)a0 sequence:(unsigned int)a1;
- (id)deleteStatusInfoWithUsername:(id)a0 sequence:(unsigned int)a1;
- (id)updateStatusInteractData:(id)a0 data:(id)a1;
- (void)cleanExpireDB:(long long)a0 deleteFlag:(BOOL)a1 keepSelf:(BOOL)a2;
- (void)oncleanExpireDBComplete:(unsigned int)a0 rsp:(id)a1;
- (void)ontestComplete:(unsigned int)a0 err:(int)a1;
- (BOOL)setMMKV:(id)a0 value:(int)a1;
- (int)getMMKV:(id)a0 defValue:(int)a1;
- (void).cxx_destruct;

@end
