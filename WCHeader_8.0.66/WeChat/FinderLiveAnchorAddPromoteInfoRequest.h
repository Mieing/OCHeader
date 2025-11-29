@class NSString, FinderLivePromoteInfoListMpArticleInfo, FinderLivePromoteInfoRedPacketCover;

@interface FinderLiveAnchorAddPromoteInfoRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int promoteType;
@property (retain, nonatomic) NSString *liveNoticeId;
@property (retain, nonatomic) FinderLivePromoteInfoListMpArticleInfo *mpArticleInfo;
@property (retain, nonatomic) FinderLivePromoteInfoRedPacketCover *redPacketCoverInfo;
@property (retain, nonatomic) NSString *programmeListId;
@property (retain, nonatomic) NSString *jumpinfoId;
@property (nonatomic) unsigned long long adId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) unsigned long long collectionId;

+ (void)initialize;

@end
