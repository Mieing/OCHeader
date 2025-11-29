@class NSString, NSDictionary, IESLiveVSGiftPanelDataSharing, IESLiveVSGiftPanelCommonReactionCenter, HTSLiveGiftStruct;

@interface IESLiveVSGiftItem : IESLiveDynamicModel <IESLiveVSGiftPanelActions>

@property (nonatomic) long long state;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;
@property (copy, nonatomic) NSString *sendDesc;
@property (retain, nonatomic) HTSLiveGiftStruct *giftModel;
@property (nonatomic) BOOL selectedFromOpen;
@property (copy, nonatomic) id /* block */ stateDidChange;
@property (copy, nonatomic) id /* block */ giftPanelWillDismissBlock;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)giftPanelWillDismiss;
- (id)initWithDataSharing:(id)a0 withReactionCenter:(id)a1;
- (void)active;
- (void).cxx_destruct;
- (void)inactive;
- (void)reset;

@end
