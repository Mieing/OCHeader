@class NSString, GCBulletMsgFlowView, ChatroomRecInfo, NSMutableArray;

@interface GCRecommendGroupCellModel : GCBaseGroupCellModel

@property (nonatomic) BOOL isLocked;
@property (nonatomic) BOOL canOnlooker;
@property (retain, nonatomic) NSString *userIconUrl;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) NSMutableArray *conditionArray;
@property (nonatomic) BOOL canJoin;
@property (retain, nonatomic) ChatroomRecInfo *chatroomRecInfo;
@property (retain, nonatomic) NSMutableArray *bulletMsgList;
@property (retain, nonatomic) GCBulletMsgFlowView *bulletFlowView;

+ (id)getEmptyStateCellModelWithSize:(struct CGSize { double x0; double x1; })a0;

- (void)configureReportModel:(id)a0;
- (Class)bindCellClass;
- (double)widthForCondition:(id)a0;
- (double)widthForTag:(id)a0;
- (double)conditionViewHeight:(double)a0;
- (double)tagLineViewHeight:(double)a0;
- (struct CGSize { double x0; double x1; })cellSizeForCollectionView:(id)a0;
- (double)rightSpace;
- (id)rightBtnText;
- (void)openChatRoom:(BOOL)a0;
- (void)handleDidSelect;
- (unsigned long long)actionStatusForAutoJoin:(BOOL)a0;
- (double)condtionGroupMaxWidthForWidth:(double)a0;
- (void).cxx_destruct;

@end
