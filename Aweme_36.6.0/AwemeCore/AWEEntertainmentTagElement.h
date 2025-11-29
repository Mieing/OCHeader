@class AWELiveVSEpisode, AWELiveShowTagViewModel, UIView, AWELiveRoomModel;

@interface AWEEntertainmentTagElement : LynxUI

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *tagView;
@property (nonatomic) long long currentType;
@property (retain, nonatomic) AWELiveShowTagViewModel *showTagViewModel;
@property (retain, nonatomic) AWELiveRoomModel *aweLiveRoom;
@property (retain, nonatomic) AWELiveVSEpisode *aweLiveEpisode;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__681;
+ (id)__lynx_ui_method_config__832;
+ (id)__lynx_ui_method_config__973;
+ (id)__lynx_ui_method_config__1104;
+ (id)__lynx_ui_method_config__1305;

- (void)setUpdatedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePaidStatus:(id)a0 withResult:(id /* block */)a1;
- (long long)currentPaidTagTypeForViewRight:(BOOL)a0 countDown:(long long)a1;
- (long long)paidTagTypeForRoomModel:(id)a0 viewRight:(BOOL)a1 countDown:(long long)a2;
- (long long)paidTagTypeForEpisodeModel:(id)a0 viewRight:(BOOL)a1 countDown:(long long)a2;
- (void)showLiveTag:(id)a0 withResult:(id /* block */)a1;
- (void)showReplayTag:(id)a0 withResult:(id /* block */)a1;
- (void)showTagByScene:(id)a0 withResult:(id /* block */)a1;
- (void)removeTag:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createView;

@end
