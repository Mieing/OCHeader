@class NSDictionary, AWEDoubleColumnSearchMerchandiseUserInfoModel, NSString;

@interface AWESearchUserWindowInfoViewModel : NSObject <AWESearchMerchandiseUserWindowInfoDelegate>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUserInfoModel *model;
@property (retain, nonatomic) NSDictionary *searchInfoDict;
@property (copy, nonatomic) id /* block */ clickLiveRoomWithGoodsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSearchResultId;
- (void)tapRecommendReasonViewWithSchema:(id)a0;
- (void)trackClickWithButtonType:(id)a0 goodsModel:(id)a1 responder:(id)a2;
- (void)userAvatarImageTapped:(id)a0;
- (void)enterWindowOrStore:(id)a0;
- (void)adTrackStoreOrWindowWithEnterFrom:(id)a0 refer:(id)a1 label:(id)a2 adExtraData:(id)a3;
- (void)userDescriptionLabelTapped:(id)a0;
- (void)userNameLabelTapped:(id)a0;
- (void)transferToProfile:(id)a0;
- (void)tapRecommendReasonView;
- (BOOL)isEnterFromShelfADWith:(id)a0;
- (void)enterBreathInfoStore:(id)a0;
- (void)trackClickUserShopAndStore:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
