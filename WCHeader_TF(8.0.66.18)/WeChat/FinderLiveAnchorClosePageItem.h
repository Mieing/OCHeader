@class FinderLiveMilestoneData, FinderLiveAnchorCloseNormalData, FinderLiveHighlightData;

@interface FinderLiveAnchorClosePageItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) FinderLiveMilestoneData *milestoneData;
@property (retain, nonatomic) FinderLiveHighlightData *highlightData;
@property (retain, nonatomic) FinderLiveAnchorCloseNormalData *normalData;

+ (void)initialize;

@end
