@class WCDataItem, WCAdSliderCardView, WCAdSliderCardProductView, WCAdSliderCardOpeningAnimationView;

@interface WCAdSliderCardLogic : WCAdvertiseOperationLogicBase

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdSliderCardView *sliderCardViewCache;
@property (retain, nonatomic) WCAdSliderCardOpeningAnimationView *openingAnimationViewCache;
@property (retain, nonatomic) WCAdSliderCardProductView *productViewCache;
@property (nonatomic) BOOL isOpeningAnimationVisible;

+ (id)getLogicWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)notifyOpeningAnimationVisibleStateChanged;
- (void).cxx_destruct;

@end
