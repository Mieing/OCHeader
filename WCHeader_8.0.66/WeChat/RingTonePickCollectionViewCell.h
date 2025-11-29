@class RingToneDetail, NSString, UIView, RingToneImageView, MMUILabel;
@protocol RingTonePickCollectionViewCellDelegate;

@interface RingTonePickCollectionViewCell : UITableViewCell <RingTonePlayerExt>

@property (retain, nonatomic) RingToneImageView *coverView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *descStack;
@property (retain, nonatomic) MMUILabel *settingsLabel;
@property (nonatomic) unsigned long long settingNum;
@property (retain, nonatomic) UIView *detailLabel;
@property (retain, nonatomic) RingToneDetail *ring;
@property (weak, nonatomic) id<RingTonePickCollectionViewCellDelegate> delegate;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellID;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)initiativeTriggerPlay;
- (void)updateContentWithRingDetail:(id)a0 friendName:(id)a1;
- (void)internalUpdateContentWith:(id)a0 friendName:(id)a1;
- (void)initTiltleLabel;
- (void)initDescLabel;
- (void)initSettingsLabel;
- (void)initDetailLable;
- (void)jumpToPlayerPage;
- (void)addConstraints;
- (void)prepareForReuse;
- (void)setHighlightedForCell:(BOOL)a0;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
