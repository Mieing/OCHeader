@class UIFont, NSMutableDictionary, CAShapeLayer, DVERulerModel, DVETimelineRulerViewModel;

@interface DVETimelineRuler : UIView

@property (class, readonly, nonatomic) double height;

@property (retain, nonatomic) DVETimelineRulerViewModel *viewModel;
@property (retain, nonatomic) CAShapeLayer *pointLayer;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSMutableDictionary *textLayers;
@property (retain, nonatomic) DVERulerModel *model;
@property (nonatomic) BOOL isUpgradesOn;

- (void)drawRuler;
- (id)buildTextLayer;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)addObservers;

@end
