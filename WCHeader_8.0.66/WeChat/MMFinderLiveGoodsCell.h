@class MMFinderLiveECHotSaleLikeAnimationMaskView, NSString, MMFinderLiveTaskId, MMFinderLiveGoodsViewModel, UIView;

@interface MMFinderLiveGoodsCell : MMFinderLiveGoodsBaseCell <MMFinderLiveGoodsViewModelDelegate, MMFinderLiveProductVisibleItem>

@property (retain, nonatomic) MMFinderLiveGoodsViewModel *goodsViewModel;
@property (retain, nonatomic) MMFinderLiveECHotSaleLikeAnimationMaskView *hotSaleLikeAnimationMaskView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) UIView *bottomSeparatorLine;
@property (readonly, nonatomic) BOOL isDuringHintAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)prepareForReuse;
- (void)addHotSaleLikeAnimationMaskView;
- (void)onGoodsViewModelUpdateByAppMessage:(id)a0;
- (void)receiveHintAnimationInfo:(id)a0;
- (void)shine;
- (id)finderLiveLogReportValueForKey:(id)a0;
- (void).cxx_destruct;

@end
