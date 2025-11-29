@class NSMutableArray, LbsLifeData;

@interface MMFinderLiveCreateLiveBottomPOIListBar : UIView

@property (copy, nonatomic) id /* block */ onPOIListBarItemClicked;
@property (retain, nonatomic) NSMutableArray *poiItemArray;
@property (retain, nonatomic) LbsLifeData *lbsLifeData;

- (id)init;
- (void)updateLbsLifeData:(id)a0;
- (void)clearPOIItemArray;
- (void)layoutSubviews;
- (void)onPOIItemClicked:(id)a0;
- (void).cxx_destruct;

@end
