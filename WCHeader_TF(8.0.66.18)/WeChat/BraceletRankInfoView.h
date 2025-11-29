@class BraceletRankLikeButton, MMWebImageView, WAContactGetter, MMHeadImageView, MMUIViewController, NSString, DeviceRankInfo, DeviceBrandJumpInfo, WAContact, MMUIButton, UILabel;

@interface BraceletRankInfoView : MMUIView <MMWebImageViewDelegate> {
    DeviceRankInfo *m_rankInfo;
    BOOL m_isBotton;
    BOOL m_isFromFocus;
    BOOL m_bShowRedDot;
}

@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *rankNumber;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) WAContact *appContact;
@property (retain, nonatomic) WAContactGetter *contactGetter;
@property (retain, nonatomic) MMWebImageView *brandIconView;
@property (retain, nonatomic) MMUIButton *brandTitleBtn;
@property (retain, nonatomic) UILabel *resultLabel;
@property (retain, nonatomic) BraceletRankLikeButton *likeButton;
@property (weak, nonatomic) MMUIViewController *parentVC;
@property (retain, nonatomic) DeviceBrandJumpInfo *jumpInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDeviceRankInfo:(id)a0 IsBottom:(BOOL)a1 IsFromFocus:(BOOL)a2 parentVC:(id)a3;
- (id)initWithDeviceRankInfo:(id)a0 IsBottom:(BOOL)a1 IsFromFocus:(BOOL)a2 showRedDot:(BOOL)a3 parentVC:(id)a4;
- (void)initView;
- (void)addSeperateLine;
- (void)addSportRecordView;
- (void)addLikeButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)onClickAppButton;
- (void)onClickBrandBtn;
- (BOOL)isAppleWatch;
- (BOOL)isHardware;
- (BOOL)isOlympic2024;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
