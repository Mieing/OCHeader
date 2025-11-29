@class UIView, NSString, VideoRingNetProvider, RingToneDetail, UIImageView, RingToneToolView, RingTone, MMUILabel;
@protocol RingToneExclusiveFriendTableViewCellDelegate;

@interface RingToneExclusiveFriendTableViewCell : MMMultiMenuTableViewCell <RingToneToolActionResponder, RingTonePlayerExt>

@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) RingToneToolView *toolView;
@property (retain, nonatomic) RingTone *ring;
@property (retain, nonatomic) VideoRingNetProvider *net;
@property (retain, nonatomic) UIView *bottomView;
@property (weak, nonatomic) id<RingToneExclusiveFriendTableViewCellDelegate> delegate;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) RingToneDetail *ringDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)initView;
- (void)updateContentWithRing:(id)a0;
- (void)initiativeTriggerPlay;
- (void)onToolViewPlayButtonTap:(BOOL)a0;
- (void)onToolViewMoreButtonTap;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
