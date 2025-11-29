@class UIView, NSString, UIButton, GiftSearchConfig, IESLiveNewGiftPanelContext, IESLiveGiftPanelTopicView, IESLiveNewGiftPanelExpansionControlsItem, IESLiveGiftTabListView;

@interface IESLiveNewGiftPanelTabItem : NSObject <IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESLiveNewGiftPanelExpansionControlsItem *expansionControlsItem;
@property (retain, nonatomic) IESLiveGiftTabListView *tabView;
@property (retain, nonatomic) IESLiveGiftPanelTopicView *topicView;
@property (nonatomic) BOOL enableTopics;
@property (nonatomic) double currentWidth;
@property (nonatomic) BOOL enableSearchOptimize;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) GiftSearchConfig *searchConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (id)initWithPanelContext:(id)a0;
- (BOOL)calEnableSearchOptimize;
- (void)updateTabViewWithWidth:(double)a0;
- (void)onSearchClicked;
- (void).cxx_destruct;
- (void)loadView;

@end
