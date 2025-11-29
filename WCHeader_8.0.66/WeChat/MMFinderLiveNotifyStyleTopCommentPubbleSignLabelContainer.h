@class MMLiveCommentDataItem, MMFinderLiveGlobalRankSignView, MMFinderLiveMemberSignView, NSMutableArray, MMFinderLiveLiveRoleSignView;

@interface MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer : UIView

@property (retain, nonatomic) MMLiveCommentDataItem *commentItem;
@property (retain, nonatomic) NSMutableArray *labelViewArr;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *roleSignView;
@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView;
@property (retain, nonatomic) MMFinderLiveMemberSignView *memberSignView;

+ (struct CGSize { double x0; double x1; })calcContainerSizeWithCommentItem:(id)a0;

- (id)initWithCommentItem:(id)a0;
- (struct CGSize { double x0; double x1; })calcViewSize;
- (BOOL)checkHasViewNeedDisplay;
- (void)updateSubSignView;
- (void)layoutSubviews;
- (void)registerSubLabelView:(id)a0;
- (void)updateSubSignViewFrame;
- (void)updateMysteriousSignView;
- (BOOL)needMysteriousSignView;
- (void)updateRoleSignView;
- (id)getRoleSignViewText;
- (BOOL)needRoleSignView;
- (void)updateGlobalRankSignView;
- (BOOL)needGlobalRankSignView;
- (void)updateMemberSignView;
- (BOOL)needMemberSignView;
- (void).cxx_destruct;

@end
