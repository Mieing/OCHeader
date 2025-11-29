@class NSString, WCFinderFeedContentVM, NSSet, WCFinderObjectHotTopic, NSMutableSet, WCFinderTableViewParamModel, FinderWindowProductInfo, WCFinderFeedBindEventInfo;

@interface WCFinderInteractivePanelConfigParamsModel : NSObject

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) BOOL isAuthorView;
@property (copy, nonatomic) NSString *createTime;
@property (nonatomic) BOOL forceShowCreateTime;
@property (retain, nonatomic) WCFinderFeedBindEventInfo *eventInfo;
@property (retain, nonatomic) WCFinderObjectHotTopic *hotTopicInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaCollectionViewFrame;
@property (nonatomic) BOOL isEnableMediaHeaderShowFollowTips;
@property (nonatomic) int scene;
@property (nonatomic) BOOL hiddenAuthorAppendDescLabel;
@property (nonatomic) BOOL showLiveState;
@property (nonatomic) BOOL hasCompletelyPlay;
@property (retain, nonatomic) FinderWindowProductInfo *goodsProductInfo;
@property (nonatomic) BOOL isTimeShowGuideItem;
@property (nonatomic) BOOL hiddenSetRingToneEntry;
@property (nonatomic) BOOL notShowFollowBtnAfterPlayOver;
@property (nonatomic) BOOL hiddenLiveAppointmentState;
@property (retain, nonatomic) NSSet *feedSourceShowSceneSet;
@property (nonatomic) BOOL emitCarouselAfterHotCommentUpdate;
@property (retain, nonatomic) NSMutableSet *jumpCarouselShowSet;
@property (retain, nonatomic) WCFinderTableViewParamModel *tableViewParamModel;

- (id)init;
- (unsigned long long)getOperatingComponentLevelWithShowPosition:(int)a0;
- (unsigned long long)getOperatingComponentLevel:(id)a0;
- (void).cxx_destruct;

@end
