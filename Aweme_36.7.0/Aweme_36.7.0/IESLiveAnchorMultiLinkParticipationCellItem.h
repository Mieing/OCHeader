@class NSString, RivalsRecommendResponse_AutoMatchInfo, IESLivePKNormalPanelViewModel, NSDictionary, NSMutableArray, IESLiveRivalExtraInfo, HTSLiveRoom;

@interface IESLiveAnchorMultiLinkParticipationCellItem : IESLiveDynamicModel

@property (nonatomic) unsigned long long listType;
@property (nonatomic) BOOL isBarItem;
@property (copy, nonatomic) NSString *barTip;
@property (nonatomic) BOOL isActiveBarIitem;
@property (weak, nonatomic) IESLiveAnchorMultiLinkParticipationCellItem *nextBarItem;
@property (nonatomic) long long curDataSourceCount;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) HTSLiveRoom *anchorInfo;
@property (retain, nonatomic) IESLiveRivalExtraInfo *rivalExtraInfo;
@property (copy, nonatomic) NSDictionary *linkerExtraInfo;
@property (retain, nonatomic) NSMutableArray *userTagsArray;
@property (copy, nonatomic) NSString *linkText;
@property (nonatomic) long long linkStatus;
@property (nonatomic) long long state;
@property (nonatomic) BOOL forbidLinkExtraInfo;
@property (nonatomic) BOOL isFromActiveInvitePanel;
@property (nonatomic) long long listNum;
@property (nonatomic) BOOL isNewStyle;
@property (retain, nonatomic) RivalsRecommendResponse_AutoMatchInfo *autoMatchInfo;
@property (nonatomic) BOOL hasAutoMatchBanner;
@property (nonatomic) BOOL hasTopBanner;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSDictionary *lynxInitialData;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } lynxEdgeInsets;
@property (copy, nonatomic) NSString *suffixStr;
@property (nonatomic) BOOL isTableViewItem;
@property (retain, nonatomic) IESLivePKNormalPanelViewModel *recommendViewModel;
@property (copy, nonatomic) id /* block */ operateAction;

- (BOOL)isPKOnGoing;
- (BOOL)isVoteOnGoing;
- (BOOL)isBreakthroughOnGoing;
- (BOOL)isSurvivalOnGoing;
- (BOOL)isOhterLinking;
- (BOOL)isMultiPKOnGoing;
- (BOOL)isMultiVoteOnGoing;
- (BOOL)isMultiShellOnGoing;
- (BOOL)isNeedChangeCell;
- (BOOL)isNeedShowFans;
- (BOOL)isInvitationAllowedFromRelationInviteeList:(BOOL)a0;
- (void).cxx_destruct;
- (id)cellIdentifier;
- (double)cellHeight;

@end
