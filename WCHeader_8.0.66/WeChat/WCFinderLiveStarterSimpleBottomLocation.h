@class LbsLifeData, NSMutableArray;

@interface WCFinderLiveStarterSimpleBottomLocation : MMUIView

@property (retain, nonatomic) LbsLifeData *lbsLifeData;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (nonatomic) double itemTop;
@property (nonatomic) double itemMargin;
@property (nonatomic) double itemGap;
@property (nonatomic) double itemHeight;
@property (nonatomic) long long itemMaxCount;
@property (copy, nonatomic) id /* block */ itemClick;

- (id)init;
- (void)createParams;
- (void)updateSimpleLocationLBSLife:(id)a0 forceUpdate:(BOOL)a1;
- (void)layoutUI;
- (void)locationItemClick:(id)a0;
- (void).cxx_destruct;

@end
