@interface IESLiveRevenueImpl.IESLiveSubscribeEmojiViewModel : NSObject <IESLiveMessageInteractionModuleCommentAction> {
    void /* unknown type, empty encoding */ room;
    void /* unknown type, empty encoding */ trackContext;
    void /* unknown type, empty encoding */ extraTrackInfo;
    void /* unknown type, empty encoding */ newStyle;
    void /* unknown type, empty encoding */ tabViewItem;
    void /* unknown type, empty encoding */ tabEntranceItem;
    void /* unknown type, empty encoding */ emojiStatus;
    void /* unknown type, empty encoding */ subscribeEmojiList;
    void /* unknown type, empty encoding */ subscribeEmojiTabInfo;
    void /* unknown type, empty encoding */ expireDate;
    void /* unknown type, empty encoding */ memberType;
    void /* unknown type, empty encoding */ guideSchema;
    void /* unknown type, empty encoding */ isNewSubscribeEmojiDic;
}

@property (nonatomic) BOOL danmakuSwitchON;
@property (nonatomic) BOOL shouldUpdateEmojiView;

- (void)didSetAttachingDIContext;
- (void)commentDanmakuSwitchDidChange:(BOOL)a0;
- (void)commentEmoticonPanelDidShow;
- (void)subscribeEmoticonDidSend:(long long)a0 error:(id)a1 duration:(double)a2 commentEnterSource:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
