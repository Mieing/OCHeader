@class MemoryMappedKV, NewLifePrefetchConf;

@interface NewLifeMMKVKeyModel : NSObject

@property (retain, nonatomic) MemoryMappedKV *internalKV;
@property (retain, nonatomic) NewLifePrefetchConf *prefetchConf;
@property (nonatomic) unsigned long long userAttrFlag;

- (id)init;
- (BOOL)updateNewLifePrefetchConfig:(id)a0;
- (BOOL)updateNewLifeUserPrepare:(unsigned long long)a0 entryRule:(id)a1;
- (id)getNewLifeUserEntryRule;
- (BOOL)enableUseFinderContact;
- (BOOL)setEnableUseFinderContact:(BOOL)a0;
- (BOOL)isHobbySelected;
- (BOOL)setIsHobbySelected:(BOOL)a0;
- (BOOL)isNewLifePostGuideByTimelineStreamExptOpened;
- (BOOL)isNewLifePostGuideByTimelineDetailExptOpened;
- (BOOL)isNewLifePostGuideByTimelineActionSheetExptOpened;
- (id)syncBufferForNewLifeSync;
- (void)setSyncBufferForNewLifeSync:(id)a0;
- (id)lastBufferForNewLifeSync;
- (void)setLastBufferForNewLifeSync:(id)a0;
- (BOOL)hasShowedPictureLocationPermissionReq;
- (BOOL)hasShownPostAssistPermissionRequest;
- (void)setShownPostAssistPermissionRequest;
- (BOOL)hasMigratedPictureLocationOnce;
- (void)setHasMigratedPictureLocation;
- (BOOL)resetJumpTopStoryTime;
- (BOOL)enableOperateDiscoverSearch;
- (void).cxx_destruct;

@end
