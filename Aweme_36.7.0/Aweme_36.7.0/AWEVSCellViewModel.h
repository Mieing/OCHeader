@class NSArray, AWELiveGoodsInfo;

@interface AWEVSCellViewModel : AWELiveFeedBaseViewModel

@property (nonatomic) BOOL didStartPlayFromHighlight;
@property (nonatomic) BOOL didStartPlayFromHistory;
@property (nonatomic) BOOL permissionDeniedForEpisodePurchase;
@property (copy, nonatomic) NSArray *validRangesForEpisodePurchase;
@property (retain, nonatomic) AWELiveGoodsInfo *goodInfo;

+ (long long)getVSVideoFirstHighlight:(id)a0;

- (BOOL)isFollow;
- (id)videoJson;
- (id)vsWatermark;
- (id)headerLeftTagText;
- (id)operationPlaceText;
- (id)watchInfo;
- (id)coverImageURLArray;
- (id)previewImageUpURLArray;
- (id)previewImageDownURLArray;
- (id)livingStatusText;
- (BOOL)hasChaseRecord;
- (long long)historyLocation;
- (BOOL)hasHeaderLeftTagText;
- (long long)startLocationForReplay:(BOOL)a0;
- (id)validRangeForPlayTime:(double)a0 validRanges:(id)a1;
- (id)roomId;
- (id)URLStringForEpisodePurchase;
- (void).cxx_destruct;
- (id)nickName;
- (id)episode;

@end
