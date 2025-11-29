@class AWEGeneralSearchBackgroundModel, CAShapeLayer, AWEEcomSearchMerchandiseBackgroundView;

@interface AWEMerchandiseSearchBackgroundManager : NSObject

@property (retain, nonatomic) AWEEcomSearchMerchandiseBackgroundView *backgroundView;
@property (retain, nonatomic) AWEEcomSearchMerchandiseBackgroundView *resultHeaderBackgroundView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } resultBackgroundFrame;
@property (nonatomic) unsigned long long generalSearchTitleTheme;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *backgroundModel;
@property (retain, nonatomic) CAShapeLayer *bottomAngleLayer;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (copy, nonatomic) id /* block */ generalSearchTitleBGShowBlock;
@property (copy, nonatomic) id /* block */ ecomSearchTitleBGChangeBlock;
@property (nonatomic) BOOL generalSearchTitleHidden;
@property (nonatomic) BOOL ignoreHostContentOffset;
@property (nonatomic) BOOL isFromECommerce;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *currentSearchBackgroundModel;
@property (nonatomic) unsigned long long currentSearchTitleTheme;

+ (id)getDefaultEcomSearchBackgroundModel;

- (void)updateGeneralSearchTitleTheme;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchBackgroundFrameOffset;
- (void)handleForceSearchTitleHidden:(BOOL)a0;
- (void)updateBottomAngleLayer;
- (id)generalResultBackgroundView;
- (id)generalResultHeaderBackgroundView;
- (void)updateResultBackgroundFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hostContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)handleForceSearchTitleHidden:(BOOL)a0 isFromSaas:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
