@class WCFinderFeedStaticCoverView, SightIconView, UIView, UILabel;

@interface WCFinderMSVideoMediaCell : WCFinderMSActivityBaseCell

@property (retain, nonatomic) WCFinderFeedStaticCoverView *coverView;
@property (retain, nonatomic) UIView *timeBGView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) SightIconView *playIconView;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })calculateCoverDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1;
+ (double)calculateBaseLine:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onContentVMChanged;
- (void)onClickVideo;
- (void)onLongPress:(id)a0;
- (void).cxx_destruct;

@end
