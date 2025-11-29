@class NSString, IESLiveGiftLongPressItem, IESLiveNewGiftPanelContext, UIView;

@interface IESLiveNewGiftPanelLongPressItem : NSObject <IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESLiveGiftLongPressItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

@end
