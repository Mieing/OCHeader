@class OVCPlaybackView;

@interface OVCPlaybackViewWrapper : UIView

@property (retain, nonatomic) OVCPlaybackView *backingPlaybackView;

- (id)init;
- (void)layoutSubviews;
- (void)teardown;
- (void).cxx_destruct;

@end
