@interface AWEFormatTrackCommonComponent : AWEIMComponentBase <AWEFormatCommonTrackInjectService, AWEIMMessageListDataAction> {
    void /* unknown type, empty encoding */ sendIndex;
    void /* unknown type, empty encoding */ lastDigitalMsg;
    void /* unknown type, empty encoding */ lastUserMsg;
    void /* unknown type, empty encoding */ didSendMsgFromUser;
    void /* unknown type, empty encoding */ isTrackResponseDuation;
    void /* unknown type, empty encoding */ responseCaptionPackageIndex;
    void /* unknown type, empty encoding */ responsePrintStartTime;
    void /* unknown type, empty encoding */ curSugQueryMsgReqId;
    void /* unknown type, empty encoding */ curClickSugId;
    void /* unknown type, empty encoding */ curClickSugMsgReqId;
    void /* unknown type, empty encoding */ curNoClickMsgSugIds;
    void /* unknown type, empty encoding */ lastClickSugId;
    void /* unknown type, empty encoding */ lastClickSugMsgReqId;
    void /* unknown type, empty encoding */ lastSugResponseParams;
    void /* unknown type, empty encoding */ msgSugIdDic;
    void /* unknown type, empty encoding */ trackUnique;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trackService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isFromSearchBrandAD;
    void /* unknown type, empty encoding */ didTrackTopicCardShow;
    void /* unknown type, empty encoding */ didTrackCharacterCardShow;
}

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)willSendNewMessage;
- (void)didReceiveNewMessageWithMessageProtocol:(id)a0 reason:(long long)a1;
- (void)didReceiveSendMessageProtocolResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)componentDidMounted:(id)a0;
- (void)trackTopicCardShow:(id)a0;
- (void)trackMessageEvent:(id)a0 menuType:(unsigned long long)a1 extra:(id)a2;
- (void)trackMsgFeedback:(id)a0 isClick:(BOOL)a1 extra:(id)a2;
- (void)trackAIInteractionMsgClick:(id)a0 extra:(id)a1;
- (void)trackAIInteractionMsgShow:(id)a0 extra:(id)a1;
- (void)trackMsgSend:(id)a0 extra:(id)a1;
- (id)msgShareParams:(id)a0 sendContext:(id)a1 key:(id)a2;
- (void)trackMsgEvent:(id)a0 msg:(id)a1 params:(id)a2;
- (void)trackGuideQuestionShow:(id)a0 extra:(id)a1;
- (void)trackClickStickOn:(id)a0;
- (void)trackStartSpan:(id)a0;
- (void)trackEndSpan:(id)a0 extra:(id)a1;
- (void)setCurrentClickSugId:(id)a0 msg:(id)a1;
- (id)msgGuideQuestionCommonParams;
- (id)formatCommonParams;
- (id)lastMsgTrackParams;
- (void)trackCharacterCardShow:(id)a0 msg:(id)a1;
- (void)trackDeepThinkWithEvent:(id)a0 duration:(double)a1;
- (void)trackCommonFormatBizWithEvent:(id)a0 extra:(id)a1;
- (void)trackStreamMessageCaptionInterval:(id)a0;
- (void)trackStreamMessageCaptionInterval:(id)a0 isEmptyPack:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
