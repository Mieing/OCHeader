@class NSString, IESECLiveRoomContext;
@protocol IESECLiveRoomContext;

@interface IESECLiveAnchorGoodsListAdapter : NSObject

@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) IESECLiveRoomContext<IESECLiveRoomContext> *roomContext;
@property (nonatomic) BOOL isPushingCouponListView;

- (void)reloadList;
- (id)initWithRoomID:(id)a0 anchorID:(id)a1 roomContext:(id)a2;
- (void)openAnchorGoodsList;
- (void)openCouponPannel;
- (void)updateGoodsWithUpdateMessage:(id)a0;
- (void)setFlashSaleSwitchOn:(BOOL)a0;
- (void)publishEventWithSellerMessage:(id)a0;
- (void)closeAnchorGoodsList;
- (void)refreshAnchorNoti;
- (void)updateGoodsWithCommonMessage:(id)a0;
- (void).cxx_destruct;

@end
