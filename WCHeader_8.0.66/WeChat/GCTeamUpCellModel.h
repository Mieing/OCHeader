@class NSString, JumpInfo, ChatroomMsgApp;

@interface GCTeamUpCellModel : GCChatBaseCellModel

@property (retain, nonatomic) NSString *backgroundImgUrl;
@property (retain, nonatomic) NSString *topTitle;
@property (retain, nonatomic) NSString *midesc;
@property (retain, nonatomic) NSString *bottomStatus;
@property (nonatomic) double bottomImageWidth;
@property (retain, nonatomic) NSString *bottomImageUrl;
@property (retain, nonatomic) NSString *rightBtnTitle;
@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (retain, nonatomic) ChatroomMsgApp *msgApp;

- (id)initWithChatroomMessage:(id)a0;
- (Class)bindCellClass;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
