@class FinderLiveNoticeInfo, FinderLivePromoteInfoAvailableItem_RedPacketCoverExtBuffer, FinderLivePromoteInfoAvailableItem_JumpInfoExtBuffer, FinderLivePromoteInfoAvailableItem_MiniProgramExtBuffer, FinderLivePromoteInfoAvailableItem_AdvertisementExtBuffer, FinderLivePromoteInfoAvailableItem_MemberZoneExtBuffer, FinderLivePromoteInfoAvailableItem_ProgrammeListExtBuffer, FinderLivePromoteInfoAvailableItem_WeComContactExtBuffer, NSString, FinderLivePromoteInfoAvailableItem_OtherExtBuffer, FinderLivePromoteInfoAvailableItem_PaidCollectionExtBuffer, FinderLivePromoteInfoAvailableItem_AppDownLoadExtBuffer, FinderLivePromoteInfoListWecomContact, FinderLivePromoteInfoAvailableItem_LiveNoticeExtBuffer, FinderLivePromoteInfoAvailableItem_ListenExtBuffer;

@interface MMFinderLivePromoteInfoAvailableItem : NSObject

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int isAvailable;
@property (nonatomic) unsigned int isAddable;
@property (nonatomic) unsigned int canShow;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusTips;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderLivePromoteInfoListWecomContact *wecomContact;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_LiveNoticeExtBuffer *liveNoticeExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_WeComContactExtBuffer *weComContactExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_ProgrammeListExtBuffer *programmeListExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_JumpInfoExtBuffer *jumpInfoExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_MemberZoneExtBuffer *memberZoneExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_AdvertisementExtBuffer *advertisementExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_AppDownLoadExtBuffer *appDownLoadExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_MiniProgramExtBuffer *miniProgramExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_OtherExtBuffer *otherExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_RedPacketCoverExtBuffer *redPacketCoverExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_ListenExtBuffer *listenExtBuffer;
@property (retain, nonatomic) FinderLivePromoteInfoAvailableItem_PaidCollectionExtBuffer *paidCollectionExtBuffer;

+ (id)createAnchorPromoteAvailableItemFrom:(id)a0;
+ (BOOL)shouldReportAtPromoteManagerAvaiableListWithType:(unsigned int)a0;

- (void).cxx_destruct;

@end
