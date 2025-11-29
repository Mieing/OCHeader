@class AWECoverTextBackground, AWECoverTextConfigView;

@interface AWECoverTextImageView : UIImageView

@property (weak, nonatomic) AWECoverTextConfigView *configView;
@property (retain, nonatomic) AWECoverTextBackground *imageInfo;

- (void)layoutOnSuperView;
- (id)initWithConfigView:(id)a0;
- (void).cxx_destruct;

@end
