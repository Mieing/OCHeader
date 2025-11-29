@class NSString, IESLiveNewGiftPanelContext, UIView, IESLiveGiftDynamicCardSectionViewModel;

@interface IESLiveNewGiftPanelSeriesGiftsItem : NSObject <IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESLiveGiftDynamicCardSectionViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

@end
