@class NSArray, UIImageView, MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderLiveGroupedBadgeView : UIView

@property (retain, nonatomic) NSMutableArray *signViewArrayForLayout;
@property (retain, nonatomic) NSArray *badgeInfos;
@property (nonatomic) double maxWidth;
@property (nonatomic) long long style;
@property (nonatomic) long long darkModeStyle;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIImageView *finderIconImageView;
@property (nonatomic) BOOL isFinderUser;

- (id)initWithLiveTaskId:(id)a0 darkModeStyle:(long long)a1;
- (void)updateWithBadgeInfos:(id)a0 badgeStyle:(long long)a1;
- (void)updateWithBadgeInfos:(id)a0 isFinderUser:(BOOL)a1 badgeStyle:(long long)a2;
- (void)sizeToFitWithMaxWidth:(double)a0;
- (void)reloadSignViewArray;
- (id)loadAnonymousSignViewIfCan;
- (id)loadMysteriousSignViewIfCan;
- (id)loadGlobalRankSignViewIfCan;
- (id)loadMemberSignViewIfCan;
- (id)loadFansGroupSignViewIfCan;
- (BOOL)onlyDark;
- (id)finderLiveTask;
- (id)boldFontForNumericText;
- (id)mediumFontForMixedText;
- (void).cxx_destruct;

@end
