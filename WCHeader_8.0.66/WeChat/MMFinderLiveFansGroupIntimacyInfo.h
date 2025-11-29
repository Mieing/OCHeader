@class FinderLiveSuperFanRightInfo, NSString, FinderLiveAllRightsInfo, FinderLiveNewRightsInfo, FinderJumpInfo, TaskProgressInfo, FinderLiveBadgeInfo, FinderLiveFanClubFloatMsgInfo;

@interface MMFinderLiveFansGroupIntimacyInfo : NSObject

@property (nonatomic) unsigned int currIntimacy;
@property (nonatomic) unsigned int nextLevelNeedIntimacy;
@property (retain, nonatomic) FinderLiveBadgeInfo *badgeInfo;
@property (retain, nonatomic) FinderLiveNewRightsInfo *theNewRightsInfo;
@property (retain, nonatomic) TaskProgressInfo *progressInfo;
@property (retain, nonatomic) NSString *introductionUrl;
@property (nonatomic) BOOL noticeReserved;
@property (nonatomic) BOOL canReserveNotice;
@property (retain, nonatomic) FinderLiveAllRightsInfo *allRightsInfo;
@property (retain, nonatomic) FinderLiveFanClubFloatMsgInfo *floatMsgInfo;
@property (retain, nonatomic) FinderLiveSuperFanRightInfo *superfanRightsInfo;
@property (retain, nonatomic) FinderJumpInfo *cancelSuperfanSubscribeJumpInfo;

- (void).cxx_destruct;

@end
