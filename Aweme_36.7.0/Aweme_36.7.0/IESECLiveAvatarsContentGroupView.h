@class IESECLiveIconsGroupView, NSString, IESECLiveContentGroupView, UIView;

@interface IESECLiveAvatarsContentGroupView : UIView <IESECLiveIconsGroupViewDelegate>

@property (retain, nonatomic) IESECLiveIconsGroupView *avatarGroup;
@property (retain, nonatomic) IESECLiveContentGroupView *contentGroup;
@property (retain, nonatomic) UIView *baseColorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateContentViewsConstraints;
- (void)iconsGroupView:(id)a0 didResetURLsWithWidth:(double)a1;
- (void)iconsGroupView:(id)a0 willAppendAvatarWithWidthGap:(double)a1 duration:(double)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
