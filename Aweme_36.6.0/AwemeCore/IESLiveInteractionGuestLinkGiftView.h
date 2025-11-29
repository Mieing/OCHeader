@class NSMutableDictionary, NSString, NSHashTable, HTSLiveGuestLinkChannelInfo, NSMutableArray;

@interface IESLiveInteractionGuestLinkGiftView : UIView <HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSMutableArray *giftQueue;
@property (retain, nonatomic) NSHashTable *displayItems;
@property (retain, nonatomic) NSMutableDictionary *comboMap;
@property (retain, nonatomic) HTSLiveGuestLinkChannelInfo *channelInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (BOOL)isGiftFromChannel:(id)a0;
- (void)clearComboGift:(id)a0;
- (void)comboGift:(id)a0 item:(id)a1;
- (void)playGift:(id)a0;
- (void)hideGiftItem:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
