@class IESECServiceProxy, NSString, IESECWinReplayCollectionObject;
@protocol IESECWinTabLayoutService;

@interface IESECWinReplayCollectionCellController : IESECWinListKitCellController <IESECWinReplayCollectionCellDelegate> {
    IESECWinReplayCollectionObject *_object;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)configCell;
- (BOOL)isSingleCard;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)updatePlayableDurationAndCurrentTimeWithDuration:(double)a0 currentTime:(double)a1;
- (id)btmInfo:(id)a0 index:(long long)a1 widget:(id)a2;
- (id)commonTrackParamsForBST;
- (void)clickGoodsVideoCoverWithModel:(id)a0;
- (void)clickGoodsCoverWithModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)openReplayPageWithURL:(id)a0 model:(id)a1 btm:(id)a2;
- (void)trackWindowExplainBackClickWithModel:(id)a0 productIdGroup:(id)a1 btm:(id)a2;
- (void)trackWindowExplainBackShowWithModel:(id)a0 productIdGroup:(id)a1 btm:(id)a2;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
