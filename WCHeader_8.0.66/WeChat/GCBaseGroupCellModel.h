@class NSString, UIColor, ChatroomData;
@protocol GCBaseGroupCellModelDelegate;

@interface GCBaseGroupCellModel : GCBaseCellModel

@property (weak, nonatomic) id<GCBaseGroupCellModelDelegate> groupCellModelDelegate;
@property (retain, nonatomic) NSString *groupIconUrl;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *groupUserName;
@property (retain, nonatomic) UIColor *midStrongNoticeColor;
@property (retain, nonatomic) NSString *midStrongNoticeText;
@property (retain, nonatomic) NSString *midDescText;
@property (retain, nonatomic) NSString *bottomDescText;
@property (retain, nonatomic) NSString *gameId;
@property (nonatomic) BOOL showRedDot;
@property (retain, nonatomic) ChatroomData *chatroomData;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAnimationFromPosFromViewManager:(id)a0 identifier:(id)a1;

- (void)configureReportModel:(id)a0;
- (void)openGameChatRoomWithConfig:(id)a0 imgView:(id)a1;
- (struct CGSize { double x0; double x1; })cellSizeForCollectionView:(id)a0;
- (double)groupCellHeight;
- (double)imgViewHeight;
- (double)rightSpace;
- (double)tagLineGroupMaxWidthForWidth:(double)a0;
- (void).cxx_destruct;

@end
