@class UIImageView, AWEFullScreenAdEggModel, AWEFullScreenAdEggViewController;

@interface AWEFullScreenAdEggImageView : UIView <AWEFullScreenAdEggView, AWEFullScreenAdEggView>

@property (retain, nonatomic) UIImageView *contentView;
@property (retain, nonatomic) AWEFullScreenAdEggModel *model;
@property (weak, nonatomic) AWEFullScreenAdEggViewController *adEggContainer;

+ (BOOL)canShowWithModel:(id)a0;

- (void)startShow;
- (void).cxx_destruct;
- (void)reset;
- (void)updateWithModel:(id)a0;

@end
