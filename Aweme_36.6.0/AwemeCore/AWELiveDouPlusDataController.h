@class AWELiveDouPlusCouponPromptsModel, AWELiveDouPlusEntryModel, NSString;

@interface AWELiveDouPlusDataController : NSObject

@property (retain, nonatomic) AWELiveDouPlusEntryModel *douPlusEntryModel;
@property (retain, nonatomic) AWELiveDouPlusCouponPromptsModel *douPlusCouponModel;
@property (retain, nonatomic) NSString *anchorID;

- (void)queryForLiveDouplusEntry:(id)a0 roomID:(id)a1 entranceType:(id)a2 completion:(id /* block */)a3;
- (void)fetchLiveRoomGoodsInfoWithRoomID:(id)a0 anchorID:(id)a1 completion:(id /* block */)a2;
- (void)fetchLiveDouPlusCouponPromptsWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
