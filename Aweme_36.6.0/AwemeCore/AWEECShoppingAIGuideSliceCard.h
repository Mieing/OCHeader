@class AWEECShoppingAIGuideMessageSingleSliceViewModel, AWEECShoppingAIGuideSliceXInstance, NSString, UIView;
@protocol AWEECShoppingAIGuideSliceCardDelegate;

@interface AWEECShoppingAIGuideSliceCard : AWEECShoppingAIGuideBaseCard <IESECSliceXEventForwardDelegate>

@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleSliceViewModel *sliceViewModel;
@property (retain, nonatomic) UIView *sliceView;
@property (retain, nonatomic) AWEECShoppingAIGuideSliceXInstance *sliceInstance;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (copy, nonatomic) NSString *sliceCardID;
@property (copy, nonatomic) id /* block */ eventAction;
@property (weak, nonatomic) id<AWEECShoppingAIGuideSliceCardDelegate> sliceCardDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (void)setupUIWithModel:(id)a0;
- (id)initWithModel:(id)a0 context:(id)a1 sliceCardDelegate:(id)a2;
- (void)_triggerEvent:(id)a0 withEventPrams:(id)a1;
- (void)p_sendTrackLogWithEventPrams:(id)a0;
- (void)p_openSchemeWithEventPrams:(id)a0;
- (void)p_showToastWithEventPrams:(id)a0;
- (void).cxx_destruct;

@end
