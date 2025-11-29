@class IESLiveCommentEmoticonPanelView, IESLiveFrequentCommentApi, IESLiveFrequentCommentDetailView, HTSEventContext, HTSLiveFrequentlyChatInfo, NSString;
@protocol IESLiveRoomService;

@interface IESLiveFrequentCommentStore : NSObject <IESLiveFrequentCommentDetailViewDelegate>

@property (retain, nonatomic) IESLiveFrequentCommentApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveFrequentCommentDetailView *detailView;
@property (retain, nonatomic) IESLiveCommentEmoticonPanelView *emojiPanelView;
@property (retain, nonatomic) HTSLiveFrequentlyChatInfo *chatInfo;
@property (nonatomic) BOOL hasTapped;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)frequentCommentIntroUpdate:(id)a0;
- (BOOL)enableFrequentComment;
- (void)addExpendedEntryItem;
- (void)sortCommentMetaList;
- (void)tapAddFrequentCommentButton;
- (void)tapRetryButton;
- (void)editCommentMetaAtIndex:(unsigned long long)a0;
- (void)deleteCommentMetaAtIndex:(unsigned long long)a0;
- (BOOL)enableOptimizeViewLoad;
- (void)setupDetailView;
- (void)requestFrequentComments;
- (void)trackFrequentCommentPanelShowWithCount:(long long)a0;
- (id)getRoleString;
- (void)setDuplicateCheckForPopupView:(id)a0;
- (void)trackFrequentCommentSaveWithEditStatus:(BOOL)a0;
- (void)trackRecommendedFrequentCommentListShowWithCount:(long long)a0;
- (void)trackFrequentCommentEditTap;
- (void)trackSortSuccess:(BOOL)a0;
- (void)trackFrequentCommentDeleteTap;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
