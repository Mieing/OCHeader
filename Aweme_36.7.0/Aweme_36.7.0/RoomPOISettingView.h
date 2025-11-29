@class IESLiveAction, UIImageView, UILabel, GetRoomIntroResponse_Data_PoiInfo, UIButton;

@interface RoomPOISettingView : UIView

@property (retain, nonatomic) GetRoomIntroResponse_Data_PoiInfo *poiInfo;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) IESLiveAction *backAction;

- (void)backButtonClick:(id)a0;
- (void)setupGuideView;
- (void)handleSwitchClick:(id)a0;
- (void)setupGuideImage;
- (void)guideImageRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
