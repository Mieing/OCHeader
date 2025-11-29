@class NSMapTable;

@interface AWESearchCardShowDepthInfoHandler : NSObject

@property (nonatomic) long long deepestRank;
@property (retain, nonatomic) NSMapTable *deepCardShowPercentTable;
@property (retain, nonatomic) NSMapTable *cardShowInfoTable;

- (void)resetShowInfoData;
- (double)calculateVisibleCardShowPercent:(id)a0 cardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isNotViewedCard:(id)a0 cardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isSingleColumn:(id)a0 cardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateDeepestPercentWithCard:(id)a0 cardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cardRank:(long long)a2 view:(id)a3;
- (void)trackCardAmpleShowWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
