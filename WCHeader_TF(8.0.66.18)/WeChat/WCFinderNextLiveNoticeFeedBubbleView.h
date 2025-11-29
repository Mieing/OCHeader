@class NSString, WCFinderInteractivePanelConfigParamsModel;

@interface WCFinderNextLiveNoticeFeedBubbleView : WCFinderFeedBubbleView <WCFinderJumpInfoViewProtocol>

@property (nonatomic) BOOL nextLiveReserved;
@property (retain, nonatomic) WCFinderInteractivePanelConfigParamsModel *paramsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateButtonTitle:(id)a0 image:(id)a1;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)onClickActionButton;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void).cxx_destruct;

@end
