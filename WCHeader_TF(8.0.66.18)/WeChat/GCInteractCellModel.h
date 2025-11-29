@class NSString, NSArray, GameJumpInfo, GameCenterMsgSender;
@protocol GCInteractCellDelegate;

@interface GCInteractCellModel : GCBaseCellModel

@property (retain, nonatomic) NSString *titleName;
@property (retain, nonatomic) NSString *bodyText;
@property (retain, nonatomic) NSString *actionDesc;
@property (retain, nonatomic) NSString *actionText;
@property (retain, nonatomic) NSString *quoteText;
@property (retain, nonatomic) NSString *quickResponseContentId;
@property (nonatomic) int quickResponseFlag;
@property (nonatomic) int alreadyMergedCount;
@property (retain, nonatomic) NSArray *headUrlArray;
@property (retain, nonatomic) GameJumpInfo *aggregateJumpInfo;
@property (retain, nonatomic) GameJumpInfo *commentJumpInfo;
@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSString *headJumpUrl;
@property (retain, nonatomic) NSString *rightImgUrl;
@property (retain, nonatomic) NSString *timeStr;
@property (nonatomic) unsigned int relationType;
@property (nonatomic) BOOL isVoted;
@property (retain, nonatomic) GameCenterMsgSender *msgSender;
@property (weak, nonatomic) id<GCInteractCellDelegate> interactDelegate;

- (Class)bindCellClass;
- (BOOL)hasQuickReply;
- (BOOL)hasQuickZan;
- (BOOL)hasFollowBtn;
- (BOOL)hasBtmActionView;
- (BOOL)hasMergeBtn;
- (double)cellHeight;
- (struct CGSize { double x0; double x1; })cellSizeForCollectionView:(id)a0;
- (void).cxx_destruct;

@end
