@class UIImageView, WCFinderLiveHomePageEntertainmentTeamupAvatarInfo, WCFinderHeadImageView;

@interface WCFinderLiveHomePageEntertainmentTeamupAvatarView : UIView

@property (retain, nonatomic) UIImageView *placeHolder;
@property (retain, nonatomic) WCFinderHeadImageView *imageView;
@property (retain, nonatomic) WCFinderLiveHomePageEntertainmentTeamupAvatarInfo *info;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithInfo:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
