@class NSString, AWEGeneralSearchModel, NSMutableSet;

@interface AWESearchCardShowPercentTrackerHandler : NSObject

@property (nonatomic) long long deepestRank;
@property (retain, nonatomic) AWEGeneralSearchModel *deepestSearchModel;
@property (retain, nonatomic) NSMutableSet *deepestSearchModelSet;
@property (copy, nonatomic) NSString *searchId;

- (double)calculateVisibleCardShowPercent:(id)a0 cardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isNotViewedCard:(id)a0 cardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)waterFallEmpleShowTrackEnable;
- (void)trackCardAmpleShowWithModel:(id)a0 searchId:(id)a1 keyword:(id)a2;
- (void)trackerDeepesetRankCardShowPercent:(id)a0;
- (void)updateDeepesetSearchModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (BOOL)isValidDictionary:(id)a0;

@end
