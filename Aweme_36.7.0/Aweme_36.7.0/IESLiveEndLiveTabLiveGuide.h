@class CommonLiveTabGuideData, IESLiveNewAudienceFinishGuideView, NSString;

@interface IESLiveEndLiveTabLiveGuide : LynxUIView

@property (retain, nonatomic) IESLiveNewAudienceFinishGuideView *guideView;
@property (retain, nonatomic) CommonLiveTabGuideData *guideData;
@property (copy, nonatomic) NSString *roomServiceIdx;
@property (nonatomic) BOOL trackGuideShow;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *logGuideAnchorId;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1471;
+ (id)__lynx_prop_config__1532;
+ (id)__lynx_ui_method_config__1583;

- (void)propsDidUpdate;
- (id)getDIContext;
- (void)sendEventToRelaxPage;
- (void)setRoomServiceIdx:(id)a0 requestReset:(BOOL)a1;
- (void)trackTabLiveGuideViewClickButton;
- (void)trackTabLiveGuideViewClickCard;
- (void)trackTabLiveGuideViewClickWithArea:(id)a0;
- (void)onGuideClick:(unsigned long long)a0;
- (void)setTabliveGuideData:(id)a0 requestReset:(BOOL)a1;
- (void)endLiveHide:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
