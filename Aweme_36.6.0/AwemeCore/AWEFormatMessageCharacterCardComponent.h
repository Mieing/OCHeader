@interface AWEFormatMessageCharacterCardComponent : AWEIMFlexComponent <AWEConversationFormatEnterActions, AWEFormatIMConversationInjectLeftPaneGesBlockService, AWEIMMessageContentInterface> {
    void /* unknown type, empty encoding */ didEnterRoom;
    void /* unknown type, empty encoding */ needTrackCardShow;
}

@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (BOOL)shouldFailFloatGestureRecognizer:(id)a0;
- (void)didUpdateFormatRoom:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (id)init;
- (id)displayMessage;

@end
