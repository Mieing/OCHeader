@class IESECLiveGoodsListAuthorShopInfo, NSString, NSArray, IESECLiveGoodsListAuthorShopWindowInfo, NSDictionary, IESECLiveStackView, YYLabel, NSNumber, IESECLiveContext;

@interface IESECLiveFlagShopView : UIView

@property (retain, nonatomic) IESECLiveStackView *shopInfoStackView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopInfo *shopInfoModel;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopWindowInfo *shopWindowInfoModel;
@property (retain, nonatomic) NSNumber *listTopDisplayStatus;
@property (retain, nonatomic) NSString *shopEntranceLocation;
@property (retain, nonatomic) NSArray *etaTagShowedTypeArray;

- (void)clickShopEntranceAction;
- (void)clickShopTitleIcon;
- (id)addLiveInfoParamsToURL:(id)a0;
- (id)trackInfoForSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
