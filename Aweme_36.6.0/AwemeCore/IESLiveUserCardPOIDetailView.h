@class NSNumber, NSString, UIImageView, IESLiveUserCardStore, UIView, IESLiveUserProfile, UILabel;

@interface IESLiveUserCardPOIDetailView : UIView <IESLiveUserCardConfigProtocol>

@property (retain, nonatomic) IESLiveUserProfile *targetUser;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIImageView *locationImageView;
@property (retain, nonatomic) UIImageView *actionIconView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSNumber *scene;
@property (nonatomic) BOOL isShowWhite;
@property (retain, nonatomic) NSString *cityInfo;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) NSString *detailInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithScene:(id)a0;
- (void)configWithUserModel:(id)a0;
- (void)onTapped:(id)a0;
- (void)configWithTag:(long long)a0 isShowWhite:(BOOL)a1;
- (void)configWithStore:(id)a0;
- (void)trackPOILabelShow;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (BOOL)shouldShow;

@end
