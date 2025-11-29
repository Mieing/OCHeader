@class UIView, NSString, AWEIMShapeView, AWEIMMentionParticipantDataController, RxDeferred, NSArray, IESIMMentionBotsConfiguration, NSMutableArray, UICollectionView, AWEIMMessageConversation, AWEIMConversationContext;
@protocol AWEIMExpediteMentionParticipantViewControllerDelegate;

@interface AWEIMMentionParticipantViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWEIMMentionParticipantDataControllerDelegate, IESIMParticipantsDataManagerDelegate>

@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double bottomY;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } searchingMentionRange;
@property (retain, nonatomic) AWEIMShapeView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *mentionMaskView;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMConversationContext *conversationContext;
@property (retain, nonatomic) AWEIMMentionParticipantDataController *imDataController;
@property (retain, nonatomic) NSMutableArray *uidArray;
@property (retain, nonatomic) RxDeferred *updateParticipantsDefer;
@property (nonatomic) BOOL needAppendAITip;
@property (nonatomic) BOOL needUpdateParticipants;
@property (nonatomic) BOOL hiddenAnimating;
@property (nonatomic) BOOL hasBackgroundImage;
@property (copy, nonatomic) NSArray *sectionTypes;
@property (retain, nonatomic) IESIMMentionBotsConfiguration *mentionBotsConfiguration;
@property (weak, nonatomic) id<AWEIMExpediteMentionParticipantViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConversationContext:(id)a0;
- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)iesim_participantsDataSourceDidUpdate;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)searchKeyword:(id)a0 searchingMentionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)hideMentionListView;
- (void)showMentionListView;
- (void)removeAllSelectedState;
- (void)removeSelectedStateWithUid:(id)a0;
- (void)makeSelectAIAppendTips:(id)a0;
- (void)updateSelectedStateWithUids:(id)a0;
- (void)dataControllerSearchCompleted:(id)a0 completionType:(unsigned long long)a1;
- (void)p_formatData;
- (void)p_reloadDataAndTrackCostTimeWhenViewDidLoad;
- (id)p_afterUpdateParticipants;
- (void)p_transferToInviteBot;
- (void)p_mentionUserWithModel:(id)a0 operation:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;

@end
