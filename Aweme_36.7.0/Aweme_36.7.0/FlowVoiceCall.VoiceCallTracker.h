@interface FlowVoiceCall.VoiceCallTracker : FlowAVKit.AVCTracker {
    void /* unknown type, empty encoding */ currentStateStartTimeStamp;
    void /* unknown type, empty encoding */ startSoothingMusicTimestamp;
    void /* unknown type, empty encoding */ userSpeakCnt;
    void /* unknown type, empty encoding */ thinkingDuration;
    void /* unknown type, empty encoding */ botSpeakCnt;
    void /* unknown type, empty encoding */ pauseDuration;
    void /* unknown type, empty encoding */ muteDuration;
    void /* unknown type, empty encoding */ muteStartTimeStamp;
    void /* unknown type, empty encoding */ suspendDuration;
    void /* unknown type, empty encoding */ startDigitalHumanTimeStamp;
    void /* unknown type, empty encoding */ currentSessionStartTimeStamp;
    void /* unknown type, empty encoding */ digitalHumanDuration;
    void /* unknown type, empty encoding */ videoDuration;
    void /* unknown type, empty encoding */ screenShareDuration;
    void /* unknown type, empty encoding */ startActionTimestamp;
    void /* unknown type, empty encoding */ vcStartInitTimestamp;
    void /* unknown type, empty encoding */ vcDidLoadTimestamp;
    void /* unknown type, empty encoding */ vcDidAppearTimestamp;
    void /* unknown type, empty encoding */ childVCStartInitTimestamp;
    void /* unknown type, empty encoding */ childVCDidLoadTimestamp;
    void /* unknown type, empty encoding */ childVCDidAppearTimestamp;
    void /* unknown type, empty encoding */ videoStartedTimestamp;
    void /* unknown type, empty encoding */ screenShareStartedTimestamp;
    void /* unknown type, empty encoding */ changeCount;
    void /* unknown type, empty encoding */ preprocessParams;
    void /* unknown type, empty encoding */ hasActivated;
    void /* unknown type, empty encoding */ captionDuration;
    void /* unknown type, empty encoding */ lastStartCaptionTS;
    void /* unknown type, empty encoding */ enterCallTracked;
    void /* unknown type, empty encoding */ endCallDidTracked;
    void /* unknown type, empty encoding */ raiseCallSwipeDidTracked;
    void /* unknown type, empty encoding */ imQuestionSet;
    void /* unknown type, empty encoding */ imAnswerSet;
    void /* unknown type, empty encoding */ imAnswerReplySet;
    void /* unknown type, empty encoding */ _avatarStyle;
}

@end
