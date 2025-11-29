@class NSString;

@interface WCTimelineEnhanceDraftController : NSObject

@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, nonatomic) unsigned long long draftType;
@property (readonly, copy, nonatomic) NSString *draftID;

+ (void)copySightDraftToSingletonPath:(id)a0;
+ (void)recoveSightDraftFileIfNeeded:(id)a0;
+ (void)clearTempSightDraftFile;
+ (id)draftIndexWithDraftType:(unsigned long long)a0 draftId:(id)a1;
+ (id)keyWithDraftIndex:(id)a0 draftDetailType:(unsigned long long)a1 curUsrName:(id)a2;
+ (id)getReferenceImageFiles;

- (id)initWithDraftType:(unsigned long long)a0 draftID:(id)a1;
- (BOOL)hasDraft;
- (BOOL)isDraftExpired;
- (BOOL)createDraft;
- (BOOL)cleanCurrentDraftSynchronizeWithConcernData:(BOOL)a0;
- (BOOL)setPostCycleId:(id)a0;
- (id)postCycleId;
- (BOOL)setDraftText:(id)a0;
- (id)draftText;
- (BOOL)setDraftPasteTextLength:(unsigned long long)a0;
- (unsigned long long)draftPasteTextLength;
- (BOOL)setDraftImages:(id)a0 needCopyImageToFile:(BOOL)a1;
- (id)draftImages;
- (BOOL)setDraftSight:(id)a0;
- (id)draftSight;
- (BOOL)setDraftPoiInfo:(id)a0;
- (id)draftPoiInfo;
- (BOOL)setDraftDynamicTagEnabled:(BOOL)a0;
- (BOOL)draftDynamicTagEnabled;
- (BOOL)setDraftTempSelectContactsForDynamicTag:(id)a0;
- (id)draftTempSelectContactsForDynamicTag;
- (BOOL)setDraftTempSelectContacts:(id)a0;
- (id)draftTempSelectContacts;
- (BOOL)setDraftLastPrivacy:(long long)a0;
- (long long)draftLastPrivacy;
- (BOOL)setDraftLastPostVisibleLabelName:(id)a0;
- (id)draftLastPostVisibleLabelName;
- (BOOL)setDraftLastPostInVisibleLabelName:(id)a0;
- (id)draftLastPostInVisibleLabelName;
- (BOOL)setDraftRemindContactUsernames:(id)a0;
- (id)draftRemindContactUsernames;
- (BOOL)setExtBean:(id)a0;
- (id)extBean;
- (id)keyWithType:(unsigned long long)a0;
- (id)keyWithDraftIndex:(id)a0 draftDetailType:(unsigned long long)a1;
- (id)createDate;
- (BOOL)isDraftExpired:(id)a0;
- (void)cleanExpiredDraft;
- (void)cleanAllForwardDraft;
- (BOOL)cleanDraftWithDraftIdex:(id)a0 SynchronizeWithConcernData:(BOOL)a1;
- (BOOL)copyImageAtAlbumToFile:(id)a0;
- (void).cxx_destruct;

@end
