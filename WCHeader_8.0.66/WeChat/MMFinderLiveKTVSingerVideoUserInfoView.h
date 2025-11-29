@class MMUILabel, NSString, WCFinderHeadImageView, MMLiveTaskId, MMFinderLiveTask, MMFinderLiveKTVSingerUserInfo;

@interface MMFinderLiveKTVSingerVideoUserInfoView : UIView <MMFinderLiveKTVStateExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMFinderLiveKTVSingerUserInfo *userInfo;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *heatLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSingerUserInfo:(id)a0 taskId:(id)a1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutHeadImageView;
- (void)layoutNameLabel;
- (void)layoutHeatLabel;
- (void)updateSingerUserInfo:(id)a0;
- (void)updateNameLabelText;
- (void)updateHeatLabelText;
- (void)onSingingStateChanged:(long long)a0;
- (BOOL)isNickAndHeatNeedShow;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 singStateChanged:(long long)a2;
- (void).cxx_destruct;

@end
