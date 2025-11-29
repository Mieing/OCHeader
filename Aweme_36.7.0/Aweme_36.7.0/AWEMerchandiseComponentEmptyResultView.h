@class NSString, NSDictionary, AWEDoubleColumnSearchMerchandiseFilterManager, NSMutableArray;
@protocol AWEMerchandiseComponentEmptyResultViewDelegate;

@interface AWEMerchandiseComponentEmptyResultView : UIView <AWEMerchandiseComponentEmptyResultItemViewDelegate>

@property (retain, nonatomic) NSMutableArray *itemSuperViews;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id<AWEMerchandiseComponentEmptyResultViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)calculateWidthWithFilterManager:(id)a0 maxWidth:(double)a1 completion:(id /* block */)a2;
+ (double)heightWithFilterManager:(id)a0 maxWidth:(double)a1;

@end
