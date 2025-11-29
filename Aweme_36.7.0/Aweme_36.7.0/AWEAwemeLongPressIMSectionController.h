@class NSMutableSet;

@interface AWEAwemeLongPressIMSectionController : AWEBaseListSectionController

@property long long selectedUserCount;
@property (retain, nonatomic) NSMutableSet *trackConsetutiveChatShowSet;
@property (nonatomic) BOOL didTrackShowReplyAuthor;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ buttonClickedTrackBlock;
@property (copy, nonatomic) id /* block */ addDismissHandlerBlock;

+ (Class)sectionViewModelClass;
+ (Class)aAWEPadModuleAdapterClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)aAWEPadModuleAdapter;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)p_closeFriendMomentShareToUserWithModel:(id)a0 index:(long long)a1 newShareState:(long long)a2;
- (void)p_sendMessageWithModel:(id)a0 enterFrom:(id)a1;
- (void)p_memoriesPlayerShareLocalToUserWithModel:(id)a0 index:(long long)a1 newShareState:(long long)a2;
- (void)updateShareStateForCellAtIndex:(long long)a0 model:(id)a1;
- (void)p_closeFriendClickMoreFriends;
- (void)p_memoriesPlayerClickMoreFriends;
- (void)shareToUserWithModel:(id)a0 index:(long long)a1 newShareState:(long long)a2;
- (BOOL)canShowLongpressPopover;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
