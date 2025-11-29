@class RingToneDetail, NSString, UIView, RingToneImageView, MMUILabel;
@protocol RingToneHistoryViewCellDelegate;

@interface RingToneHistoryViewCell : MMBaseMultiMenuTableViewCell <RingTonePlayerExt>

@property (retain, nonatomic) RingToneImageView *coverView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *rightContentStackView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIView *detailLabel;
@property (retain, nonatomic) RingToneDetail *ring;
@property (nonatomic) BOOL isPlaying;
@property (weak, nonatomic) id<RingToneHistoryViewCellDelegate> delegate;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentWithRingDetail:(id)a0;
- (void)layoutSubviews;
- (void)jumpToPlayerPage;
- (void)prepareForReuse;
- (void)initiativeTriggerPlay;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
