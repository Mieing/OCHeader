@class NSString, IESLiveGiftPanelDataSharing, UIView, NSNumber;

@interface IESLiveDynamicGiftPanelTopicPlaceholderItem : NSObject <IESLiveRefactGiftPanelEventAction, IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) UIView *placeholderView;
@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) IESLiveGiftPanelDataSharing *currentPanelDataSharing;
@property (retain, nonatomic) NSNumber *currentToExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (void)gpe_giftTopicExpandStatusWillChangeToExpand:(BOOL)a0 pageType:(long long)a1;
- (void)updatePanelDataSharing:(id)a0;
- (id)initWithPanelContext:(id)a0;
- (void)doAnimationWithToExpand:(BOOL)a0 pageType:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;

@end
